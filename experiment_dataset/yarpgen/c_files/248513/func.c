/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248513
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)1022)) && (((/* implicit */_Bool) var_10)))))))))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((long long int) var_14)))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-1039)) : (var_2)))), (min((((/* implicit */unsigned int) var_6)), (1852110585U))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */signed char) min((((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_3] [i_3])), (((((arr_5 [i_1] [i_2 + 2] [i_4]) && (((/* implicit */_Bool) (signed char)-123)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)60910))))));
                                arr_13 [i_4] [i_4] [i_2] [i_3] = ((/* implicit */unsigned char) 1365226505);
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned int) min((1365226505), (var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)92)), (arr_4 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1]))) : (arr_10 [i_4] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_11))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)123)), ((short)-10527))))))), (max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -994131461)) : (arr_12 [i_0]))))))))));
                                var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned int) min(((_Bool)1), ((_Bool)1)))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0]))))) ? (((/* implicit */int) min(((unsigned short)65535), (var_8)))) : (((/* implicit */int) (signed char)-124))))) * (((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_5 + 2] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6] [i_5] [i_5 - 2] [i_5]))) : (var_3)))));
                            arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)76)))))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0]))))) : (((/* implicit */int) ((arr_9 [i_6] [i_5] [i_1] [9U]) && (((/* implicit */_Bool) arr_8 [i_6])))))))) ? (((/* implicit */int) (unsigned short)16)) : (((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_17 [i_6] [i_1] [i_6] [i_1] [i_1] [6U])), (var_4)))) : (((int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_0] [(unsigned short)6] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_8)))) + (((/* implicit */int) (signed char)-16))))), (min((((/* implicit */long long int) (unsigned char)245)), (var_0)))));
                            arr_27 [i_7] [i_7] = ((/* implicit */_Bool) arr_11 [i_0]);
                            var_25 = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123)))))) ? (((((/* implicit */unsigned long long int) -1365226506)) % (5143721800356057891ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (266338304) : (((/* implicit */int) (unsigned short)29805))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 2; i_9 < 13; i_9 += 3) 
    {
        for (long long int i_10 = 1; i_10 < 15; i_10 += 2) 
        {
            {
                var_27 &= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)124)) && (((/* implicit */_Bool) var_9)))) ? ((+(((/* implicit */int) arr_31 [i_10 - 1] [i_9 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4797375213148563277LL)))))));
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 13; i_11 += 3) 
                {
                    for (unsigned short i_12 = 3; i_12 < 15; i_12 += 3) 
                    {
                        {
                            arr_38 [i_12] [i_12] [i_12] [i_9] = ((/* implicit */short) ((unsigned short) min(((unsigned char)64), (((/* implicit */unsigned char) (signed char)79)))));
                            arr_39 [i_9] [i_9] [i_11] [i_12] [i_11] = ((/* implicit */short) ((arr_37 [i_9] [(_Bool)1] [i_9] [i_11] [i_11]) ? (-4797375213148563277LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_28 *= ((/* implicit */signed char) ((unsigned long long int) (~(arr_30 [i_9 + 2] [i_11 - 1] [i_12 - 2]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
