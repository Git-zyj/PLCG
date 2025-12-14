/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246614
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
    var_19 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)32768))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_3 [i_1] [9ULL])))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned short)32768)))))))) : (((/* implicit */int) max((arr_4 [i_0]), (arr_2 [i_0] [(_Bool)1]))))));
            var_20 &= ((/* implicit */unsigned long long int) ((unsigned int) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))) : (min((((/* implicit */unsigned int) (unsigned short)32768)), (var_13))))));
            arr_8 [i_1] = ((/* implicit */short) (unsigned short)32771);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-40)), (var_10)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-121)))) : ((~(((/* implicit */int) arr_4 [i_0]))))));
            var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_2])))))) - (((/* implicit */int) (!(((/* implicit */_Bool) -5881370699345120087LL)))))));
            arr_12 [i_2] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (min((var_0), (((/* implicit */unsigned int) arr_10 [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
        }
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_19 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) var_16);
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)127), ((signed char)34)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-11))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) == (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_3]))))))) + (arr_9 [i_3])))));
                    arr_20 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)512)))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119)))))) ? (((/* implicit */int) arr_18 [(signed char)10] [i_3 + 3] [i_3 + 3])) : (((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 1]))))) : (((((((/* implicit */_Bool) (signed char)-127)) || ((_Bool)1))) ? (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)121))) : (arr_16 [i_0] [i_3 + 1]))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned char)4)))))))));
                    arr_21 [i_3] [i_3 + 3] [11U] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_4])) ? (4164219120U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_4])))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_17 [i_3 + 3] [i_3 + 1])) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned long long int) var_16)) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3202779797221082339LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_3] [i_3] = ((/* implicit */signed char) (+((-(((/* implicit */int) max((var_18), (((/* implicit */signed char) (_Bool)1)))))))));
                                arr_27 [i_5] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-126), (arr_17 [i_3 + 2] [i_3 + 2])))) ? ((((_Bool)1) ? (10283844857906232084ULL) : (18446744073709551590ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)255), ((unsigned char)206)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
    {
        arr_31 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-105)) || (((/* implicit */_Bool) (signed char)59))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    arr_39 [i_7] [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */int) min((arr_37 [i_7] [i_8 - 2] [i_8 - 1] [i_9]), (((/* implicit */short) (signed char)-69))))) * (((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_7))))) * (((((/* implicit */int) arr_25 [i_7] [(signed char)10] [i_7] [i_7] [i_7])) | (((/* implicit */int) arr_22 [i_7] [i_7] [i_8] [i_9] [i_9]))))))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 2; i_10 < 17; i_10 += 2) /* same iter space */
                    {
                        arr_43 [i_7] [(signed char)6] [3U] [i_10 + 1] = ((/* implicit */_Bool) ((var_0) + (((unsigned int) arr_22 [i_10] [i_10] [i_10 + 1] [i_8 + 1] [i_8]))));
                        var_23 *= ((_Bool) (_Bool)1);
                        var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-28)) | (((/* implicit */int) (unsigned char)137))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 2; i_11 < 17; i_11 += 2) /* same iter space */
                    {
                        arr_47 [i_11 + 1] [i_8 + 1] [i_8 + 1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)86))));
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                    }
                    for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_50 [i_7] [i_7] [i_8] [i_9] [i_12] [i_12] = ((/* implicit */signed char) max((3786931150U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_8 + 3])) / (((/* implicit */int) arr_34 [i_8 - 1])))))));
                        var_26 += var_10;
                    }
                    arr_51 [10ULL] [i_9] [(unsigned char)14] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_8 + 3] [i_8] [i_9])) ? (((/* implicit */int) (signed char)-40)) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)461)) ^ (((/* implicit */int) (signed char)-69))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)127))))));
                }
            } 
        } 
        var_27 = ((((/* implicit */_Bool) arr_42 [18ULL] [i_7])) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-33)), (-8984265557525518460LL)))), (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17079192310049915425ULL)) ? (2201273609U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_52 [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-49))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_16 [i_7] [i_7])))));
    }
}
