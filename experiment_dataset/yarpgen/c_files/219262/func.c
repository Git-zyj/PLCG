/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219262
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_11 = arr_0 [i_2] [i_2 + 1];
                            var_12 += ((/* implicit */long long int) (~((~(18446744073709551615ULL)))));
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+(arr_10 [i_2 - 1]))))));
                            var_14 = ((/* implicit */unsigned long long int) ((8483949354953908664LL) >= (((/* implicit */long long int) ((2147483647) / ((-2147483647 - 1)))))));
                        }
                        var_15 = ((/* implicit */unsigned long long int) (+(2147483647)));
                        var_16 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) ^ (3950955669U)));
                        var_18 &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24859))) : (9898966158988609263ULL))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)-38)) || (((/* implicit */_Bool) 2381755577U)))));
                        var_20 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) - (13U)))) ? ((-(3450463603951101019ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24859))));
                    }
                    arr_16 [i_0] [i_1] [i_2] = ((long long int) 2061584302080ULL);
                    arr_17 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((1752686550143782441ULL) - (1752686550143782414ULL))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)31744)) <= (((/* implicit */int) max(((unsigned short)16), ((unsigned short)63045)))))))));
}
