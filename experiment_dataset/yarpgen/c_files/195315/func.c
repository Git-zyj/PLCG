/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195315
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~((~(((/* implicit */int) var_19)))))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)39950))))), (var_5))))));
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (((~(var_17))) < (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (min((((/* implicit */long long int) arr_2 [(unsigned short)0])), (-4940789085303940737LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_10 [i_5 - 2] [i_5] [(signed char)7] [i_1 - 2] [3LL]))));
                        arr_15 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)25586))));
                        var_23 += ((/* implicit */long long int) (~(((((/* implicit */int) arr_10 [i_5] [i_5 - 1] [i_2] [i_1] [i_0])) & (((/* implicit */int) arr_2 [i_5 - 3]))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_5 - 1])) / (((/* implicit */int) arr_1 [i_1 - 1] [i_5 + 1])))))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 2]))) & (-4940789085303940737LL))))));
                    }
                }
                for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6 - 1])) && (((/* implicit */_Bool) ((((/* implicit */int) var_14)) % (((/* implicit */int) (signed char)-24))))))))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((((((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)7)))) & (((/* implicit */int) arr_17 [i_1 - 2] [i_1 - 2] [i_6] [(unsigned short)3])))), ((+(((/* implicit */int) arr_13 [i_6 + 1] [i_1] [i_6] [i_1] [i_1 - 2] [i_6])))))))));
                }
                for (long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) arr_3 [i_1]);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 4; i_8 < 7; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) 8112223015488215215LL))))))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_11))));
                        arr_24 [i_8 - 3] [i_8] [i_8] [i_0] = ((/* implicit */signed char) ((unsigned char) -257651367410496991LL));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_17)))))) ? (((/* implicit */int) ((unsigned char) var_13))) : ((+(((/* implicit */int) arr_21 [(unsigned short)3] [i_1 - 1] [i_7] [i_8 - 2]))))));
                    }
                }
                for (long long int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                {
                    arr_27 [i_9] [i_1] [i_1 - 1] [i_0] &= ((/* implicit */unsigned short) 257651367410496991LL);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                arr_32 [i_11] [i_1 - 2] [i_1 - 1] [i_10] [(unsigned char)6] = ((/* implicit */unsigned short) 257651367410496980LL);
                                var_32 = ((/* implicit */long long int) (unsigned short)37097);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (unsigned short i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                        {
                            {
                                arr_40 [3LL] = ((/* implicit */signed char) max((-4216834760861497485LL), (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((50331648LL), (arr_33 [i_0] [i_1 - 2] [i_14])))))));
                                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_6 [i_13 - 1] [i_12] [i_1]))));
                            }
                        } 
                    } 
                } 
                arr_41 [i_0] = (unsigned short)25586;
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) 6686863144846885610LL))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 8112223015488215215LL)) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16)))))))) : ((~(((/* implicit */int) (unsigned char)255)))))))));
}
