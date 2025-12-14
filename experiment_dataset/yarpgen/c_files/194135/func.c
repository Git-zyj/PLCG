/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194135
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) var_1)), (-1371721686777192056LL))))) : (min((-755946703934493664LL), (((/* implicit */long long int) 225504961))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [(signed char)4] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) (~(2129575427U)));
                            arr_11 [i_1] [i_1] [(unsigned short)5] [i_2] [(unsigned char)7] = ((/* implicit */_Bool) (+(-944529067)));
                            var_12 = ((/* implicit */unsigned short) max((max((arr_5 [i_0] [i_1] [i_0 + 1]), (((/* implicit */long long int) arr_3 [i_0 - 1] [i_1] [i_0 - 2])))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2])) + (((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_2])))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(short)9] [i_0] [i_1] [(short)9] [i_1]))))) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (arr_3 [i_0] [i_1] [i_0])))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) (+(arr_3 [i_0] [i_1] [i_0]))))))))));
                arr_13 [i_1] = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned int i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_18 [i_4] [i_4] [i_4])) + (((/* implicit */int) (short)-4818)))), (((/* implicit */int) max(((signed char)47), (((/* implicit */signed char) arr_4 [i_4] [i_4] [i_4])))))))) ? (((/* implicit */int) (!(arr_16 [i_4])))) : (((((/* implicit */int) ((_Bool) arr_8 [i_4] [i_4] [i_4] [(_Bool)1] [i_6 - 1]))) + (((/* implicit */int) (!(arr_4 [i_4] [i_5] [i_6]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_7 [i_4] [i_7] [i_7]))));
                                arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) min(((((_Bool)1) ? (398351908U) : (1062321306U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (var_3))))))), ((~(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_4] [i_4] [i_4]))) : (arr_23 [i_5] [i_5] [i_7] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            for (unsigned short i_11 = 2; i_11 < 14; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_12 = 2; i_12 < 15; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                                var_16 += ((/* implicit */signed char) (-(var_9)));
                            }
                        } 
                    } 
                    arr_46 [i_9] [i_9] [i_9] [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_9] [i_9] [i_9] [i_10] [i_11] [i_11] [i_11])) ? ((~((-(((/* implicit */int) arr_43 [i_9] [i_9] [i_9] [i_10] [i_11] [i_11] [i_11 - 1])))))) : (((/* implicit */int) ((signed char) (-(arr_36 [i_9] [i_10] [i_9] [i_11])))))));
                }
            } 
        } 
    } 
}
