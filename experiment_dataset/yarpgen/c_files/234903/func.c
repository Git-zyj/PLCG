/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234903
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_1] [7] [i_3] = arr_6 [i_0];
                            arr_12 [i_0] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 + 4])))));
                            var_10 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_1 [(signed char)1] [i_0])))));
                            var_11 = ((/* implicit */int) ((max((min((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_3] [i_3])), (-7245063791181422390LL))), (((/* implicit */long long int) arr_6 [i_0])))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-27))))) ? (((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) arr_7 [i_2] [i_2] [i_1]))))) : (arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] [(_Bool)1]))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)64349)) ? (((/* implicit */long long int) 4294967295U)) : (-6226882023752067696LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)4]))))))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0])) | (arr_7 [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) (signed char)16)) ? (arr_15 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49525)))))))), (max((arr_9 [i_0] [i_0] [i_0 - 2] [i_0]), (((long long int) (_Bool)1))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((var_0) >= (((/* implicit */int) ((signed char) (signed char)94))))))));
                                arr_22 [i_0 + 2] [i_0] = max((((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0 - 3] [i_1] [i_4])), (arr_7 [(short)4] [i_1] [i_1])))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))))), (min(((~(arr_5 [i_0] [i_0] [i_0]))), (((((/* implicit */int) (signed char)-99)) ^ (((/* implicit */int) (signed char)99)))))));
                                arr_23 [i_0] [i_1] [(unsigned char)4] [i_4] [i_6] &= (~(((unsigned int) ((arr_5 [i_6] [i_4] [i_0]) > (((/* implicit */int) var_4))))));
                                arr_24 [i_4] [i_1] [i_4] [i_5] [i_4] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max(((signed char)112), ((signed char)125)))) != (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4] [i_4])) < (((/* implicit */int) (signed char)-127)))))))) == (((/* implicit */int) min((max(((short)-12466), (((/* implicit */short) (signed char)127)))), (min((((/* implicit */short) arr_13 [i_4] [i_1] [i_1])), (arr_2 [i_0]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 2; i_7 < 13; i_7 += 2) 
                {
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((1435087826) % (((/* implicit */int) (signed char)-115))));
                            var_16 |= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-49))));
                            /* LoopSeq 2 */
                            for (long long int i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
                            {
                                var_17 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)69)) <= (1435087826))))))), (((((/* implicit */_Bool) (signed char)-78)) ? (-1789047238340047347LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32121)))))));
                                var_18 = ((/* implicit */unsigned short) min((max((((unsigned int) arr_29 [i_0] [i_1] [i_7] [i_7] [i_7])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0]))) | (1683060461U))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)48)) | (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_8] [i_1])))))))));
                                arr_33 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) min((arr_15 [i_0] [(unsigned short)11] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-79))))))));
                                var_19 = ((/* implicit */unsigned short) (signed char)99);
                            }
                            for (long long int i_10 = 2; i_10 < 11; i_10 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (signed char)114)) ? (-1110682189) : (-1435087828)))))));
                                arr_36 [i_0] [i_1] [i_8 + 1] [i_10] = ((/* implicit */unsigned char) max(((signed char)120), (((/* implicit */signed char) (!((_Bool)1))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_11 = 2; i_11 < 12; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (short i_13 = 1; i_13 < 12; i_13 += 1) 
                        {
                            {
                                arr_45 [i_0] [i_1] [i_0] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)48)) == (((int) 2644334985U))));
                                var_21 = ((/* implicit */unsigned char) ((signed char) ((max((5325252386514750326LL), (((/* implicit */long long int) 1650632316U)))) >> (((/* implicit */int) ((_Bool) (signed char)12))))));
                                var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 3707797643U))))), (max((arr_8 [i_0] [i_1] [i_12] [(short)7]), (((/* implicit */int) (_Bool)1))))))), (max((min((((/* implicit */long long int) arr_44 [i_13] [i_12] [i_11 + 1] [i_1] [i_0])), (-3133817499193861254LL))), (((/* implicit */long long int) ((arr_9 [i_0 - 2] [i_0 - 2] [i_11] [i_12]) <= (((/* implicit */long long int) -1435087821)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 17; i_14 += 3) 
    {
        for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            for (int i_16 = 1; i_16 < 17; i_16 += 3) 
            {
                {
                    arr_54 [i_14] [i_15] [i_15] = min((((/* implicit */int) (_Bool)1)), ((-(arr_50 [i_14 + 1]))));
                    var_23 = (!(((/* implicit */_Bool) -1425675377)));
                    arr_55 [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_48 [i_14 + 2]), (((/* implicit */long long int) ((var_0) != (((/* implicit */int) (signed char)29)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7)))))) : (max((((/* implicit */unsigned int) (signed char)120)), (((((/* implicit */_Bool) arr_49 [i_14] [i_16 + 1])) ? (((/* implicit */unsigned int) var_3)) : (arr_49 [i_14] [i_14])))))));
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */int) var_5)) | (((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (_Bool)1)))));
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((var_0) == (((/* implicit */int) var_6)))))));
}
