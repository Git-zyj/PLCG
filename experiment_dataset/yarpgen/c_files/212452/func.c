/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212452
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
    var_11 -= ((/* implicit */int) (((+(var_3))) / (((/* implicit */unsigned long long int) var_2))));
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 11288351221907655056ULL))));
                var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8571239997763700859ULL)) ? (9875504075945850743ULL) : (((/* implicit */unsigned long long int) arr_0 [0] [i_1]))))) ? (arr_0 [2ULL] [i_1]) : (((int) 3994352015091481768ULL))));
                var_14 -= ((((((unsigned long long int) arr_0 [4] [4])) & (((/* implicit */unsigned long long int) ((int) var_10))))) & (((((/* implicit */_Bool) ((int) var_7))) ? (((((/* implicit */_Bool) var_4)) ? (6369285441482444700ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) arr_0 [12ULL] [i_1 + 1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                            {
                                var_15 -= (-((+(min((arr_3 [i_3] [i_3]), (((/* implicit */unsigned long long int) var_10)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((int) -504006852));
                                var_17 ^= ((/* implicit */int) var_1);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                            {
                                var_18 += ((9875504075945850735ULL) - (((/* implicit */unsigned long long int) arr_11 [i_1 + 3] [i_1 + 1])));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = ((int) 1244716640);
                                var_19 |= ((/* implicit */unsigned long long int) var_2);
                                var_20 *= ((/* implicit */unsigned long long int) ((arr_6 [i_3] [i_3]) << (((var_5) - (16774836945618895154ULL)))));
                                arr_17 [i_0] [5] [i_1] [0] [i_2] [i_1] [i_5] = var_7;
                            }
                            for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_6), (var_10))))))), ((-(12077458632227106925ULL))))))));
                                var_22 = ((int) ((((/* implicit */_Bool) (~(var_0)))) ? (((((var_7) + (2147483647))) << (((11ULL) - (10ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                                arr_21 [i_0] [i_3] [i_0] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (-2147483647 - 1))) * (4240587420776633799ULL))) * (var_3)))) ? (((((/* implicit */_Bool) ((unsigned long long int) 6369285441482444700ULL))) ? (((((/* implicit */unsigned long long int) var_9)) * (var_8))) : (((((/* implicit */_Bool) var_8)) ? (6369285441482444700ULL) : (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) (-(var_10))))));
                            }
                            for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 4) 
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((6369285441482444687ULL) ^ (var_5))) : ((~(8617786669265069628ULL)))))) ? (((int) arr_22 [i_7 - 1] [i_7 + 4] [i_7 + 3] [i_1 + 1] [i_1 + 2])) : ((~(((/* implicit */int) ((var_2) > (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_24 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] [i_7 + 2] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) != (var_1)))) + (((/* implicit */int) ((arr_13 [i_1 + 3] [i_1 + 1] [i_1 - 1]) != (arr_13 [i_1 + 1] [i_1 + 2] [i_1 - 1])))));
                            }
                            var_24 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((var_9) % (var_7)))), (min((var_8), (arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-2147483647))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
