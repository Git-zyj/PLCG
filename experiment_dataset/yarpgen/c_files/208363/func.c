/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208363
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
    var_15 = ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            var_16 *= (!(((/* implicit */_Bool) -23LL)));
                            arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) max((max((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1])), (23LL))), (((/* implicit */long long int) var_2)))));
                        }
                        for (signed char i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            arr_20 [(signed char)4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((arr_13 [i_5] [i_3] [i_2] [i_0]), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])))), (min((0LL), (((/* implicit */long long int) var_1))))))) ? (min((23LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (max((max((27LL), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_5])))), (max((var_4), (13LL)))))));
                            arr_21 [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_4 [i_1 + 1] [i_5 - 1]), (((/* implicit */int) var_1)))))));
                            arr_22 [i_0] [i_1 - 2] [i_1] [i_3] [9ULL] = ((/* implicit */signed char) min(((short)13043), (((/* implicit */short) (_Bool)1))));
                        }
                        arr_23 [i_0] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-123))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (max((((/* implicit */long long int) var_3)), (var_9))))) << (((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned char)1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -6LL)))) : ((~(0LL))))) + (21LL)))))));
                            var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_3))))) ? ((-(arr_14 [(_Bool)1] [(_Bool)1] [(unsigned char)11] [(_Bool)1] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1)))))))));
                            var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -11LL)) ? (-14LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) arr_11 [i_0] [i_2] [i_6] [i_0])))))) : ((+(-8LL)))))) ? (13LL) : (-5904556764167758081LL))))));
                            arr_30 [i_2] [(_Bool)1] [i_1] [(_Bool)1] [12LL] = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */long long int) arr_0 [i_7])), (var_4))));
                        }
                        var_21 = ((/* implicit */long long int) min((var_21), (min((((/* implicit */long long int) max((((/* implicit */int) arr_25 [i_0] [i_6])), (arr_16 [i_1] [8] [8] [1U] [i_0] [i_6] [i_1 - 1])))), (min((((/* implicit */long long int) var_3)), (var_9)))))));
                    }
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((max((((/* implicit */long long int) max(((unsigned char)44), (((/* implicit */unsigned char) (signed char)96))))), (min((-5644921034851599838LL), (((/* implicit */long long int) (short)10)))))), (max((19LL), (((/* implicit */long long int) (signed char)-118)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_39 [(_Bool)1] [i_8] [i_10] [i_10] = ((/* implicit */short) var_12);
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((((/* implicit */long long int) 0U)) | (arr_13 [i_8] [i_9] [i_10] [i_10]))), (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max(((_Bool)1), (var_0)))) : (0)))));
                                arr_44 [2] [i_8] [8U] [i_11] [i_12] = ((/* implicit */unsigned char) max((8LL), (((/* implicit */long long int) (+(((/* implicit */int) ((short) var_9))))))));
                                arr_45 [i_12] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) arr_9 [i_12] [i_12] [i_8])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-14LL))))));
}
