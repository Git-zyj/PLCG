/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239393
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_11 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15495)) % (2147483633)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 1]))));
                        /* LoopSeq 4 */
                        for (long long int i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7051622274138262651ULL)) ? (-2147483638) : (((/* implicit */int) (unsigned short)65535))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_1] [(signed char)16] [i_3])) ? (7051622274138262671ULL) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_13 -= ((/* implicit */short) arr_0 [i_2] [(_Bool)1]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [(unsigned short)1] [i_1] [i_3] [i_3] [24LL] = ((/* implicit */unsigned int) (+(7051622274138262651ULL)));
                            var_14 = ((/* implicit */unsigned char) var_2);
                            arr_21 [i_0] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_5])) ? (((/* implicit */int) arr_5 [i_1] [(unsigned char)6])) : (((/* implicit */int) arr_9 [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)-10282)))))));
                            var_15 = ((/* implicit */int) ((unsigned long long int) 11395121799571288965ULL));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) ((arr_7 [i_0 - 2] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-10282)))) : (((((/* implicit */_Bool) var_9)) ? (var_9) : (4294967286U)))));
                            var_17 -= ((((11395121799571288940ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_2] [i_1] [21LL]))))) << (((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])) + (29102))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_28 [i_0] [i_0] [i_1] [i_3] [(_Bool)1] [i_7] [i_7] = ((/* implicit */unsigned int) 18ULL);
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned char) (unsigned short)47136)))));
                        }
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_0] [6] [i_0] [i_0 - 1] [i_0] [i_0])) * ((+(((/* implicit */int) var_4)))))))));
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_10))) <= (((/* implicit */int) (unsigned short)31807))));
    }
    var_21 &= ((/* implicit */long long int) var_4);
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_1))));
    var_23 = ((int) -2332756761458624634LL);
    var_24 = ((/* implicit */short) ((((/* implicit */int) ((signed char) min((((/* implicit */short) (_Bool)1)), ((short)-13805))))) != ((~((+(-1469577230)))))));
}
