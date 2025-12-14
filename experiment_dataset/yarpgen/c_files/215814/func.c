/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215814
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
    var_11 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)31160));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10758)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 - 1])))))) : ((((_Bool)1) ? (((/* implicit */long long int) arr_4 [i_2] [i_2 - 1] [i_2])) : (((((/* implicit */_Bool) 3863577481U)) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_1] [i_0])))))))));
                    var_12 = arr_5 [i_1];
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) (unsigned char)216);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_17 [i_3] [i_3] [i_4] [i_4] [i_4] = arr_9 [i_3] [i_3];
                                var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) (signed char)67)) : (arr_0 [i_4] [i_0])))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_3])))) ? (((2147483647) / (((/* implicit */int) arr_2 [i_3] [i_0])))) : (min((2147483641), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)127)) ? (arr_4 [i_4] [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_0])))))))), (((((/* implicit */_Bool) ((-1) + (((/* implicit */int) arr_11 [i_0] [i_3] [i_3]))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0])))))))));
                    arr_18 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 47249443U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3] [i_3])) + (((/* implicit */int) arr_9 [i_0] [i_3]))))) : (((((((/* implicit */unsigned int) 2147483647)) >= (arr_4 [i_0] [i_3] [i_4]))) ? (((((/* implicit */unsigned int) -2147483641)) % (arr_4 [i_0] [i_3] [i_4]))) : (((/* implicit */unsigned int) 1488388414))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */signed char) 127);
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7)))) ? (min((((/* implicit */long long int) 2147483641)), (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) -1108924822)) : (2200891945U))))))) ? (((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) 716704967)) || (((/* implicit */_Bool) (short)-16266))))))) : ((+(((/* implicit */int) var_9))))));
    var_18 = ((/* implicit */int) ((_Bool) (unsigned char)169));
}
