/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231920
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
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) arr_0 [i_0] [12U]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [(signed char)10] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (unsigned char)42))));
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((unsigned char) arr_2 [(unsigned short)2] [i_3 - 3])))));
                                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2 - 2] [i_0] [i_2 + 2] [i_2 + 4])) & (((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_1] [i_2 - 3] [i_3] [i_3]))));
                            }
                        } 
                    } 
                    arr_15 [(unsigned char)2] [(unsigned char)2] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)41))));
                }
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(max((arr_3 [i_0] [i_1] [14LL]), (arr_3 [6U] [i_1] [6U]))))))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [14LL] [i_5] [i_5]))) / (-2921807423433154809LL))))))));
                    arr_18 [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) min((var_2), (118657218U)))), (((((/* implicit */_Bool) var_8)) ? (-3189440545557655240LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5 - 1] [i_5]))))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)148))))));
                }
                var_15 = ((/* implicit */_Bool) (unsigned short)13032);
                var_16 = ((/* implicit */_Bool) ((unsigned int) (((+(2462807593U))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])), ((short)29374))))))));
                arr_19 [i_1] [i_1] [i_0] = ((((2973163002U) & (arr_8 [i_0]))) == (max((var_0), (((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (short i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_17 ^= arr_12 [i_6] [i_6] [i_6];
                        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (signed char)77)))));
                        var_19 = ((/* implicit */int) (unsigned char)20);
                        var_20 = ((/* implicit */short) min((var_20), (((short) var_4))));
                    }
                    var_21 = ((/* implicit */_Bool) min((min((4176310078U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8077)) || (((/* implicit */_Bool) arr_7 [i_6] [i_7] [i_8 + 1]))))))), (((/* implicit */unsigned int) ((signed char) 4176310095U)))));
                    var_22 ^= ((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_11 [6] [i_8 - 1] [i_6 + 1] [(unsigned char)0] [(_Bool)1] [i_6] [i_8]))))), (((((((/* implicit */int) (short)-1558)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (52411)))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_8])) && (((/* implicit */_Bool) 118657218U))))), ((~(2654893845U)))))) || (((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_9))))))));
                    arr_32 [i_7] [i_7] [i_6] = (+(((/* implicit */int) min(((unsigned short)57459), (((/* implicit */unsigned short) (unsigned char)40))))));
                }
            } 
        } 
    } 
}
