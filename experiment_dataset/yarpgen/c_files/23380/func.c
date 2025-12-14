/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23380
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) >= (31LL)))) >= (((/* implicit */int) var_5)))))));
    var_14 = min((((/* implicit */unsigned long long int) (unsigned char)244)), (0ULL));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */int) (unsigned char)254)) / (((/* implicit */int) (unsigned char)12))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)240)), (16478496606815857815ULL)));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_9))));
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_1])), (max((((/* implicit */int) (short)-5)), (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_4))))))));
        var_18 = ((/* implicit */long long int) 4294967295U);
        arr_6 [i_1] = ((/* implicit */signed char) arr_4 [(_Bool)1]);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_2])) != (((((/* implicit */int) arr_4 [i_2 + 1])) / (((/* implicit */int) var_9))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) 29360128U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) : (4265607179U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((4294959104U) >= (3125698960U))))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_12)), (arr_5 [i_2] [i_2 + 1]))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2 + 1] [i_3])) | (((/* implicit */int) var_5))))))))));
                arr_15 [i_3] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1]))) : (min((((/* implicit */unsigned int) (signed char)-115)), (3781310326U)))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) arr_12 [i_2])))))) / ((~(var_1)))))));
                arr_16 [i_2] [i_3] [i_2 + 1] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 29360128U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)));
                arr_17 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */signed char) (~((~(((arr_11 [(_Bool)1] [i_3] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3074774859U)))))));
            }
        }
        arr_18 [i_2] = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
    {
        arr_23 [(unsigned char)2] [i_5] = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)79)))) | (((/* implicit */int) arr_20 [i_5 + 1]))));
        var_21 = ((/* implicit */signed char) ((unsigned char) var_9));
    }
}
