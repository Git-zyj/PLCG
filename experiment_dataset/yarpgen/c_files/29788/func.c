/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29788
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])))))));
                    var_12 -= ((/* implicit */int) var_6);
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((-1472298734) + (2147483647))) >> (((((/* implicit */int) var_2)) + (126))))))) ? (-1472298713) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_7)) << (((1005984U) - (1005966U)))))))));
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_6);
                }
                for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_3 + 2] = ((/* implicit */unsigned char) 1472298734);
                    var_13 += ((/* implicit */unsigned short) arr_12 [i_3] [i_1] [i_3] [i_3]);
                    var_14 = 1472298733;
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 6; i_5 += 4) 
                        {
                            {
                                arr_19 [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1472298731)) ? (-1472298741) : (1472298733))), (((/* implicit */int) ((unsigned short) var_3)))))) ? (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) != (2336910894245242900LL))))) : (((((/* implicit */int) min((var_8), (var_8)))) ^ (1472298734)))));
                                var_15 = ((/* implicit */long long int) ((signed char) -1472298734));
                                var_16 = min((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_3 + 2]))))))), ((~(((9639169601850580913ULL) << (((-1472298743) + (1472298771))))))));
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_4]))))) : (((/* implicit */int) (!(var_7)))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (((((-(((long long int) var_6)))) + (9223372036854775807LL))) >> ((((-(-1472298712))) - (1472298712))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_8] [i_7] = ((/* implicit */unsigned short) ((unsigned int) 14021899848967706229ULL));
                                var_19 = ((/* implicit */unsigned short) var_9);
                                var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) min((1472298732), (var_4)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_6);
}
