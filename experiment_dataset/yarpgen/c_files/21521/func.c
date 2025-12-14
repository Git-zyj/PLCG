/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21521
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) * (((((((/* implicit */long long int) 1681649374U)) & (var_11))) & (((/* implicit */long long int) 2500889003U))))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_0))));
    var_16 = ((/* implicit */unsigned short) ((short) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)32750))) | (var_11)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (-(1794078279U)))) > (((long long int) var_4)))) ? (var_6) : (((/* implicit */int) var_2))));
                        var_17 *= ((/* implicit */unsigned short) var_2);
                        var_18 *= ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [(unsigned short)3] [i_3]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_17 [i_0] [i_1] [8LL] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)67);
                            var_19 *= ((/* implicit */unsigned char) arr_5 [i_4]);
                            arr_18 [i_2] [i_2] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2269245766265583606LL)) ? (((/* implicit */unsigned long long int) 1794078293U)) : (((((/* implicit */_Bool) 976245012)) ? (15146393076963117626ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_20 = ((/* implicit */unsigned short) ((arr_11 [(unsigned short)5] [i_1] [i_2] [i_1]) < (((((/* implicit */unsigned long long int) var_6)) - (3300350996746433989ULL)))));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524))) : (arr_1 [i_4]))))));
                        }
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) -2413975109131919211LL))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((-4600698458641582853LL) + (((/* implicit */long long int) 976245012))));
                    arr_24 [i_0] [i_5] = ((/* implicit */int) 4754136456169511298LL);
                    var_23 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) ((unsigned char) 57522614U))))) + (2147483647))) << (((((/* implicit */int) arr_5 [i_5])) % (((/* implicit */int) arr_5 [i_6]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) var_4);
    }
}
