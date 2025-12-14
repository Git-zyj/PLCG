/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208101
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((int) var_0))))) & (min((((/* implicit */long long int) ((short) (signed char)7))), (((((/* implicit */_Bool) var_1)) ? (-970324862143525566LL) : (((/* implicit */long long int) 1593233187)))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
        {
            var_14 ^= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)25))) : (var_0));
            var_15 = ((((/* implicit */_Bool) (-(1293310791U)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2])));
        }
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_16 = 9763838041313358212ULL;
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_2 + 1] [i_2 + 1] [i_0 + 3])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (signed char)-25);
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (-1593233188)))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (signed char)25))) ? (((((/* implicit */unsigned long long int) arr_1 [i_6] [i_4])) * (var_1))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1] [i_4]) / (arr_1 [i_5] [i_3]))))));
                            var_19 = ((/* implicit */unsigned char) (((!(((_Bool) -1168610056)))) ? (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))) : (arr_8 [i_5] [i_4] [i_0 + 3]))), (((/* implicit */unsigned long long int) ((int) 1669516896798497266LL))))) : ((~(((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_11))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) max((-970324862143525559LL), (((/* implicit */long long int) arr_13 [i_4] [i_0 + 1] [i_3] [i_0 + 1]))))))));
                var_22 = ((/* implicit */unsigned char) var_6);
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_17 [6] [i_0 - 1] [i_0 - 1] [6])) - (((/* implicit */int) arr_17 [(signed char)8] [i_0 + 3] [i_0 + 2] [(signed char)8]))))))));
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    var_24 += ((/* implicit */unsigned int) var_4);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) != (2147483633)))) >= (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)28)))))))) : (var_1))))));
                                arr_32 [i_8] = ((/* implicit */unsigned short) ((((((arr_27 [i_10 + 2] [i_7] [i_8] [i_9 - 2]) ^ (((/* implicit */int) var_7)))) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9 - 1] [i_7] [i_0 + 1]))) - (var_11))) - (288073392U)))));
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9 - 1] [i_7]))) > (((494330771U) << (((1168610035) - (1168610031)))))))), (15ULL))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_8) && (((/* implicit */_Bool) var_7))))), (((((var_6) / (((/* implicit */unsigned long long int) -1593233203)))) << (((((/* implicit */_Bool) (unsigned short)65527)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                }
            } 
        } 
        var_28 += ((/* implicit */unsigned char) ((((unsigned long long int) (unsigned char)221)) == (((/* implicit */unsigned long long int) ((int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 2])))));
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((+(((/* implicit */int) ((-1593233188) >= (((/* implicit */int) arr_3 [i_0 + 3] [i_0]))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 3] [8ULL]))))))))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 1; i_11 < 17; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 19; i_12 += 4) 
        {
            for (int i_13 = 2; i_13 < 19; i_13 += 3) 
            {
                {
                    var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_13] [i_12] [i_12 + 1] [i_11 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (var_6)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : ((~(var_11)))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_11 + 3] [i_12 - 2] [i_13 + 1])) : (((/* implicit */int) arr_5 [i_11 + 1] [i_12 - 2] [i_13 - 1])))))));
                    arr_41 [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_13 + 1] [i_12 + 1] [i_11 + 2]))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_7))));
    }
    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_11))));
    var_34 = ((/* implicit */unsigned char) var_5);
}
