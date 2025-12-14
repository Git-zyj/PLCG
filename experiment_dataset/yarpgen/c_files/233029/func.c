/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233029
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
    var_10 = ((/* implicit */unsigned short) 1073391416678306373LL);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(arr_2 [i_0])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 480U)) ? (arr_1 [i_0]) : (((/* implicit */long long int) -1148288095))))), (var_0)))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)124))) ? (16777215U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_8))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) arr_4 [i_1]);
        var_13 = ((/* implicit */unsigned short) (+(-4339681176787407276LL)));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((unsigned short) ((unsigned int) arr_4 [i_2]));
        arr_10 [i_2] = ((/* implicit */unsigned short) (((-(((arr_4 [i_2]) / (var_1))))) - ((((!(((/* implicit */_Bool) arr_2 [9LL])))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_5 [i_2]))))) : (((/* implicit */int) arr_5 [i_2]))))));
        var_14 |= ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_2] [i_2])) == (8796091973632LL))))))));
        var_15 = ((/* implicit */long long int) arr_7 [i_2] [i_2]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_18 [i_5 - 1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) 8796091973605LL))) ? (((((/* implicit */long long int) 1963588676U)) % (240518168576LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))))) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_4 [i_3])) == (var_4)))), ((+(var_0))))) - (15516301512417095502ULL)))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_4 [i_5]))));
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-8796091973613LL) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) arr_11 [i_3]))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) (+(8796091973616LL))))), ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) max((-8796091973630LL), (((/* implicit */long long int) arr_4 [i_3]))))) : (arr_13 [i_4 - 1] [i_5 - 1]))))))));
                }
            } 
        } 
        arr_19 [i_3] = ((/* implicit */int) 8796091973630LL);
        arr_20 [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) arr_16 [i_3] [i_3] [i_3])))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 20; i_6 += 1) 
        {
            var_19 += ((/* implicit */unsigned char) (-(min((var_0), (((/* implicit */unsigned long long int) arr_22 [i_6 - 2] [(signed char)18]))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 6U))));
        }
    }
    var_21 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
}
