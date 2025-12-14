/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23422
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) ((unsigned char) var_10)))))) ? ((-(((/* implicit */int) var_6)))) : (var_4)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) (!(var_9)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))));
            arr_4 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)227)) ^ (var_3))))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */int) arr_1 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                var_16 = ((/* implicit */short) arr_3 [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_6))))));
                        var_18 = ((/* implicit */long long int) ((arr_10 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] [i_3]) ? (((((/* implicit */int) arr_10 [i_3] [i_1] [(signed char)15] [i_3] [i_4] [i_4] [(signed char)11])) * (((/* implicit */int) arr_8 [i_0] [(unsigned char)4] [i_2] [i_3] [i_2] [i_4])))) : (((/* implicit */int) (signed char)-33))));
                        arr_11 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? (arr_7 [(signed char)12] [(unsigned short)2] [i_1] [(unsigned short)2]) : (arr_7 [i_0] [(short)16] [i_3] [i_4])));
                    }
                    arr_12 [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1414405207)) ? (((3445513488U) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (849453807U)));
                    var_19 = ((/* implicit */signed char) ((arr_9 [i_1] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_15 [i_2] [i_1] |= (~(arr_7 [i_0] [i_0] [i_2] [i_2]));
                    arr_16 [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_5] [i_2] [i_2] [i_5])) & (((/* implicit */int) var_9))));
                    arr_17 [i_2] [i_2] &= ((/* implicit */signed char) (-(((/* implicit */int) ((short) 1163388697U)))));
                }
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    arr_22 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [5LL] [i_2] [i_6])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [10LL] [i_1] [10LL] [i_1] [i_1])))));
                    arr_23 [i_0] [14U] [5U] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (arr_14 [i_0] [i_1] [i_0] [i_0] [i_2] [i_2]) : (arr_14 [i_0] [8] [8] [i_0] [6] [i_6])));
                }
                arr_24 [12LL] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
            }
        }
        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            arr_29 [i_0] [i_0] [i_7] = ((signed char) (-(((var_6) ? (2932829136U) : (arr_7 [(short)1] [i_0] [i_0] [i_7])))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_37 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) -52627899744679101LL);
                        arr_38 [i_0] [i_7] [i_8] [i_10] [15ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        var_20 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) var_0)), ((+(var_5)))))));
                        var_21 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (7026341877412115052ULL)))), ((-(((/* implicit */int) ((unsigned char) arr_0 [i_8])))))));
                        arr_39 [i_9] [i_7] [5LL] [i_9] [i_9] [i_10] [5LL] = ((/* implicit */unsigned long long int) (((-(arr_5 [i_9]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11420402196297436563ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))))))));
                    }
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_26 [i_0] [i_9]), (arr_26 [5] [i_7])))) ? ((-(((/* implicit */int) arr_26 [i_7] [i_7])))) : (((/* implicit */int) arr_26 [i_8] [i_0]))));
                }
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    arr_42 [i_0] [(unsigned char)0] [11U] [i_11] [i_11] = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [15LL] [i_11] [i_8] [i_11] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54573))) : ((~(11420402196297436563ULL)))));
                    var_24 = ((/* implicit */unsigned short) var_1);
                }
                var_25 *= ((/* implicit */short) (signed char)35);
                arr_43 [i_0] [i_7] [i_7] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 7026341877412115050ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))))));
                var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((12146970692405129623ULL) + (7026341877412115068ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [(short)9] [i_7] [i_0] [i_0]))))), (((((/* implicit */_Bool) -5995098273456279569LL)) ? (arr_25 [i_7]) : (7026341877412115050ULL)))));
                arr_44 [i_0] [i_0] [i_8] [i_7] = ((11420402196297436547ULL) * (1124800395214848ULL));
            }
            for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                var_27 = ((/* implicit */long long int) (-(max((((((/* implicit */int) (unsigned short)54898)) * (((/* implicit */int) (signed char)0)))), (((/* implicit */int) max((var_2), (arr_48 [5ULL] [i_7] [15LL]))))))));
                arr_49 [i_12] [i_12] = ((/* implicit */unsigned char) ((7026341877412115037ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1), (((/* implicit */int) (unsigned short)31))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [4] [4] [4] [i_0]))) : (((long long int) var_3)))))));
            }
        }
        var_28 = ((/* implicit */int) (unsigned char)244);
    }
}
