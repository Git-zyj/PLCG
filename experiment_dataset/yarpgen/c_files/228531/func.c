/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228531
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
    var_18 = (+(min((((unsigned int) var_9)), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_1))))))));
    var_19 = ((((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) : (var_15))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (var_12)))), (max((var_17), (var_6))))))));
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_17)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4104867237626587378LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))) ? (312080036U) : (1073741808U)));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned int) var_14)), (arr_1 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_9))))))) << (((((unsigned int) min((var_5), (((/* implicit */unsigned long long int) var_2))))) - (181U)))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_1])))) ^ (((long long int) var_3)))), (((/* implicit */long long int) var_16))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (+(var_0)))))));
            arr_10 [2U] &= ((/* implicit */unsigned int) var_13);
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_2] [15LL] [i_2] = ((unsigned int) (+(((/* implicit */int) ((signed char) var_17)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_23 &= ((/* implicit */long long int) ((_Bool) (-((+(((/* implicit */int) var_8)))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(((unsigned long long int) arr_15 [i_4] [i_4 + 4] [i_4] [i_3])))))));
                            arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_9))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) max(((+(arr_21 [8U] [i_2]))), (((/* implicit */unsigned long long int) min(((~(arr_3 [i_2]))), (var_12))))));
                            arr_25 [i_0 + 2] [i_0] [i_0] [i_2] [i_3] [(_Bool)1] [i_6] = var_14;
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((var_13) ? (arr_4 [i_3]) : (((/* implicit */unsigned long long int) arr_3 [i_6])))) <= (((/* implicit */unsigned long long int) ((long long int) var_15)))))), (((((_Bool) arr_18 [i_2 + 1])) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_9))))), (arr_16 [i_0] [i_0] [i_3] [i_3 - 1] [i_4 + 2] [i_7])));
                            var_28 = ((/* implicit */signed char) (~((~(max((((/* implicit */long long int) (unsigned char)97)), (-4104867237626587392LL)))))));
                        }
                    }
                } 
            } 
            arr_29 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_2])) << (((((/* implicit */_Bool) arr_0 [0U] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))), (((((var_10) - (var_10))) << (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_3)))))))));
            var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) max((var_5), (((/* implicit */unsigned long long int) arr_11 [(signed char)14] [i_2 - 1] [i_2] [(signed char)14])))))) ? (((((/* implicit */_Bool) arr_26 [i_0] [6U] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [12U] [12U] [(unsigned char)18])) ? (arr_19 [i_0] [i_2 + 2] [i_2 + 2] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_13 [i_2] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) : (((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 2] [i_2]))))))))));
        }
        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((unsigned int) max((arr_23 [i_0] [i_0] [i_8] [i_8 + 1] [22U]), (arr_16 [(signed char)10] [i_0] [i_8] [i_8 + 2] [(signed char)10] [i_8])))))));
            var_31 = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) * (0ULL)))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((unsigned short) var_8)))));
            arr_35 [i_0] [19U] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_26 [i_0 + 1] [i_9] [i_9] [i_9 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0 + 1] [i_9] [i_0] [i_0 - 1]))) : (var_11))), (((/* implicit */unsigned int) ((((_Bool) arr_18 [i_0 - 3])) ? (((((/* implicit */int) var_14)) << (((/* implicit */int) var_13)))) : (((/* implicit */int) var_8)))))));
            var_33 = (+(((((/* implicit */_Bool) max((arr_3 [i_9]), (((/* implicit */unsigned int) arr_12 [i_0] [i_9] [i_0 - 1]))))) ? (arr_27 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9]) : ((-(arr_24 [i_9] [i_0] [i_0] [i_9 + 4]))))));
            var_34 = ((/* implicit */unsigned int) max(((((+(var_5))) - (((/* implicit */unsigned long long int) arr_31 [i_0] [i_9] [i_0])))), (((unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_3)))))));
            /* LoopNest 3 */
            for (long long int i_10 = 4; i_10 < 23; i_10 += 2) 
            {
                for (unsigned int i_11 = 1; i_11 < 23; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        {
                            var_35 = min((arr_20 [i_11 - 1] [i_11] [i_12] [(_Bool)1] [i_12]), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_0))))));
                            arr_43 [i_0] [i_9] [i_10 - 3] [i_11 + 1] [i_9] [i_12] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned int) var_4)), ((-(var_0))))));
                        }
                    } 
                } 
            } 
        }
        arr_44 [(unsigned short)20] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 2]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_15 [i_0] [i_0] [i_0 - 2] [i_0]))))))));
            arr_48 [i_0] = ((unsigned int) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_13])))));
        }
        for (signed char i_14 = 4; i_14 < 23; i_14 += 3) 
        {
            arr_51 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_47 [i_0] [i_14 - 1]))))), (((unsigned int) var_11))))));
            var_37 -= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_3)));
            var_38 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))));
            var_39 -= ((/* implicit */_Bool) arr_27 [16ULL] [i_14 - 4] [2U] [i_0 - 1] [16ULL]);
        }
        /* LoopSeq 2 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            arr_54 [(signed char)10] &= var_3;
            var_40 = ((/* implicit */unsigned char) (+(((unsigned int) ((unsigned int) arr_2 [i_15] [i_0])))));
            arr_55 [16U] [i_15] = ((/* implicit */unsigned char) arr_39 [i_15] [i_15 - 1] [i_15 - 1] [i_15]);
        }
        for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_13))))))))))));
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_3))))) : (var_7)));
            arr_58 [i_0] [i_0] &= ((/* implicit */unsigned char) ((min((min((var_12), (((/* implicit */unsigned int) arr_28 [19ULL])))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))) ^ ((~(min((arr_37 [i_0] [i_0 + 2] [(unsigned char)5] [i_0 + 2]), (((/* implicit */unsigned int) var_3))))))));
        }
    }
}
