/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231429
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_10 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) & (arr_2 [(_Bool)1] [i_0])));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_11 -= ((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1] [i_1]));
                var_12 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (2147483647)));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */long long int) (_Bool)0);
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                            var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) + (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 - 1] [i_1] [i_3] [i_3 + 3]))) : ((-(var_4)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8998469516352098700LL)) ? (((/* implicit */int) (short)-1482)) : (((/* implicit */int) (short)28250))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
            }
        }
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3374011139U)) ? (((((/* implicit */int) (unsigned short)22035)) & (((/* implicit */int) (unsigned short)35059)))) : (((/* implicit */int) (unsigned short)43504))))), (max((((/* implicit */unsigned int) arr_1 [14U])), (var_1))))))));
        var_18 &= ((/* implicit */int) max((((/* implicit */unsigned int) var_0)), ((-((-(arr_0 [(unsigned short)16])))))));
        arr_14 [i_0] = ((/* implicit */unsigned short) (((((~(arr_2 [i_0] [i_0]))) | (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))) % ((+(((-1456940963352925964LL) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_19 -= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) (unsigned char)48))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9248))) <= (920956167U))))));
        arr_17 [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_16 [i_5])))));
        arr_18 [i_5] = arr_16 [20ULL];
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(var_4))))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            {
                var_22 = ((((/* implicit */_Bool) ((((var_5) & (((/* implicit */long long int) var_9)))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_9))))))) ? (var_9) : ((+(var_1))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_7]))))), (((/* implicit */unsigned long long int) arr_1 [2ULL]))))))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max(((~(920956157U))), (((/* implicit */unsigned int) max((4095), (((/* implicit */int) (short)1482))))))))));
            }
        } 
    } 
}
