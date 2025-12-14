/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46928
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
    var_20 = var_1;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = max(((-(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17015333565741588181ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (arr_0 [i_0])))));
        arr_4 [i_0] = 506871679;
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((long long int) (-2147483647 - 1))));
            var_21 += ((unsigned long long int) ((((var_1) % (((/* implicit */int) arr_5 [0LL])))) / (((var_3) + (((/* implicit */int) arr_6 [i_0] [4LL] [4LL]))))));
            arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_19) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_0])), (-2147483644))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) > (((/* implicit */int) arr_5 [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -762387880)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (var_7)))) ? ((-(arr_0 [i_1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))));
            arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */unsigned long long int) 762387865)) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned char) 1147846193))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) 666826176))), ((-(arr_1 [i_1] [i_0])))))));
        }
        arr_11 [i_0] = ((/* implicit */long long int) (+(arr_2 [i_0])));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_13)) != ((+(var_8)))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -1147846194)) ? (((/* implicit */int) arr_20 [10] [i_4] [i_4] [i_5])) : (((/* implicit */int) (unsigned char)142)))))))));
                        arr_21 [i_3] [i_3] [i_4] = ((/* implicit */int) arr_1 [i_3] [i_3 - 2]);
                        arr_22 [i_3] [i_3] [0U] [i_5] [i_5] [i_3] = (-(((((/* implicit */_Bool) var_15)) ? (-1147846194) : (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_0 [i_2]))));
        }
        var_24 = ((/* implicit */int) ((arr_13 [i_2] [i_2]) & (3633939668155352457ULL)));
        var_25 = ((/* implicit */unsigned char) var_16);
    }
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) 13U)), (14812804405554199172ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49)))))))));
    var_27 = ((/* implicit */signed char) var_1);
}
