/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233463
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
    var_11 = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_7)) ? (268435455) : (((/* implicit */int) var_5)))))), (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((9223372036854775807LL) < (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                arr_17 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_3))))));
                                var_13 *= ((/* implicit */short) ((((((/* implicit */long long int) arr_0 [i_0])) > (-4935609133644363224LL))) && (((/* implicit */_Bool) arr_16 [11LL] [i_3] [i_3]))));
                                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1226836892338001381LL)))) ? ((~(var_1))) : ((~(var_1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8581545984ULL)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_7)) : (4194303ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (1073741824))))))));
                                var_15 = ((/* implicit */_Bool) min((var_15), (max(((((!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 12853075484682660735ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned char)19] [i_2] [(signed char)14] [i_4])))))))), ((!(((/* implicit */_Bool) (unsigned short)55497))))))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                            {
                                arr_21 [i_5] [i_5] = ((/* implicit */long long int) ((signed char) (unsigned short)49781));
                                arr_22 [i_0] [i_0] [i_1] [i_2] [(unsigned char)17] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_10 [i_0] [3ULL] [17LL] [3ULL])))) ? (((((/* implicit */_Bool) (signed char)-15)) ? (var_7) : (7636463968988030913LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                            }
                            arr_23 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_18 [(unsigned char)0] [(unsigned char)0] [i_2] [8LL] [i_3])) ? (((/* implicit */unsigned long long int) arr_10 [(signed char)17] [i_1] [i_1] [i_0])) : (18446744073709551606ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [(short)14])) || (((/* implicit */_Bool) var_4)))))))) ? (((((/* implicit */_Bool) min((var_0), ((signed char)-51)))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])), (arr_5 [(unsigned char)16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_12 [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (-211328789)))), (((((/* implicit */_Bool) (unsigned char)11)) ? (arr_18 [i_1] [5LL] [i_1] [i_0] [i_0]) : (var_9))))))));
                arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_9)))) ? (((var_8) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [18ULL] [(_Bool)1] [(short)4]))))))), (var_1)));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3567737836177736062LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (min((((/* implicit */long long int) var_4)), (var_8)))))), (((((/* implicit */_Bool) max(((unsigned short)28672), (((/* implicit */unsigned short) var_0))))) ? (max((((/* implicit */unsigned long long int) (signed char)-75)), (4503599627368448ULL))) : (((/* implicit */unsigned long long int) -7629986287837286933LL))))));
    var_18 = min((max((((((/* implicit */_Bool) var_2)) ? (var_8) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-113))))))), (((/* implicit */long long int) var_6)));
}
