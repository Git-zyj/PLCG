/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3432
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */int) max((((unsigned long long int) arr_0 [i_0 - 1])), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_0 [(unsigned char)21])) : (((/* implicit */int) (short)15483)))) != (((/* implicit */int) arr_0 [i_0 - 1])))))));
        var_17 = ((/* implicit */unsigned char) (-(var_13)));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) -8192534811213229845LL)) ? (((/* implicit */long long int) 4004497639U)) : (6726302309593973414LL))), (((/* implicit */long long int) arr_1 [16U]))));
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1])) >= (((/* implicit */int) (signed char)-106)))), (((_Bool) arr_1 [i_0 - 1]))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 2) 
            {
                var_19 = ((/* implicit */int) (~(-8608711857477459733LL)));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_9), (var_0)))), (((int) arr_2 [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */short) (unsigned char)12))))) ? (max((((/* implicit */long long int) (unsigned char)199)), (6726302309593973414LL))) : ((~(8608711857477459732LL)))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_8), ((short)15483)))), (((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_2 - 4])) ? (((/* implicit */unsigned long long int) arr_7 [i_3 + 1] [i_2 - 4] [i_0 - 1])) : (arr_13 [i_3 + 1] [i_2 - 4])))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_4] [i_2] [i_3 + 1]) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_3 [i_3 + 1] [i_2 - 3] [i_0 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) var_0);
            }
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)16] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [(_Bool)1] [(short)5]))) >= (arr_10 [24U] [i_1] [i_0] [i_0 - 1] [i_1]))))) : (((((/* implicit */unsigned long long int) arr_14 [i_1])) | (arr_10 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 24; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) (-(arr_14 [i_6])));
                arr_19 [i_0] [i_5] [i_6] [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)6]))) : (var_3)))));
            }
            for (unsigned char i_7 = 4; i_7 < 23; i_7 += 4) 
            {
                arr_22 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((signed char) 7090740975841558996ULL));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) : (arr_10 [i_0] [i_7] [i_0 - 1] [i_0] [i_7 + 1])));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) arr_3 [(signed char)7] [i_0] [i_7])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (signed char)-52))))));
            }
            var_28 = ((/* implicit */long long int) (((-(((/* implicit */int) var_11)))) | (((/* implicit */int) arr_16 [i_0 - 1]))));
        }
        /* vectorizable */
        for (short i_8 = 3; i_8 < 24; i_8 += 2) 
        {
            var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_14 [(unsigned char)20])) : (((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(signed char)10] [0U] [(_Bool)1]))) : (var_3)))));
            var_30 = ((/* implicit */short) arr_10 [i_0] [i_8] [i_0] [i_0 - 1] [i_0]);
        }
        /* LoopNest 3 */
        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 3) 
        {
            for (int i_10 = 4; i_10 < 21; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 3; i_11 < 23; i_11 += 2) 
                {
                    {
                        var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 244916887)) ? (((/* implicit */int) ((arr_31 [i_0] [i_9] [i_10] [i_11 - 3]) < (((/* implicit */int) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_10] [(unsigned char)16] [i_10] [i_11])))))))) ? (((/* implicit */int) (unsigned char)7)) : ((+(((/* implicit */int) max((var_5), (var_5))))))));
                        arr_36 [i_0] [i_10] [i_10 + 4] [(signed char)1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)24] [i_9] [i_10] [i_11]))) / (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) - (var_13)))) ? (-6726302309593973414LL) : (-6726302309593973415LL)))));
                        var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_34 [i_0 - 1] [(signed char)10] [(signed char)10] [i_10 - 3])))) : (((arr_34 [(unsigned char)12] [i_9] [i_10] [i_10 - 1]) + (((/* implicit */long long int) 1U))))));
                        var_33 = ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_12] [i_12] [i_12] [i_12 - 1])) && (((/* implicit */_Bool) arr_29 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1]))));
        arr_39 [i_12] [(short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) arr_15 [i_12])) : (((/* implicit */int) arr_33 [i_12 - 1] [i_12]))));
    }
    var_35 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_11)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
}
