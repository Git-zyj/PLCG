/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222207
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_9))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) 3903925364203492398LL)) ? (((/* implicit */long long int) 1025753633)) : (((3903925364203492424LL) & (min((3903925364203492389LL), (3903925364203492389LL))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((-3903925364203492394LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) << (((((((/* implicit */int) var_6)) | (((/* implicit */int) var_7)))) + (22222))))) : (((((((/* implicit */_Bool) var_0)) ? (-3903925364203492389LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3903925364203492394LL))));
                    arr_7 [i_2 - 1] [i_2] [i_2] [i_0] = ((/* implicit */short) (((_Bool)1) ? (3903925364203492398LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_2] = ((/* implicit */int) var_5);
                                var_15 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_2] [i_2] [i_2] = min((((/* implicit */long long int) (unsigned char)0)), (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (3903925364203492394LL))));
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */_Bool) (+(var_11)));
        arr_19 [i_0] = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) var_10)), (arr_8 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))));
    }
    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (short)-23248)) : (((/* implicit */int) (short)28672))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)0)), ((-2147483647 - 1))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 23; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_18 = (~(((/* implicit */int) (unsigned char)251)));
                                var_19 -= ((/* implicit */unsigned long long int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 = (+(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 17262945429183131490ULL))))))));
    var_21 = ((/* implicit */short) var_3);
}
