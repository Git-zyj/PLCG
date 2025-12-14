/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213416
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) var_12)))))), (((((/* implicit */int) max((arr_2 [i_2] [i_1] [i_0]), ((short)896)))) * (((/* implicit */int) ((unsigned short) var_5)))))));
                    arr_9 [i_0 - 3] [i_0 - 2] [i_1] [(short)19] = ((((/* implicit */_Bool) ((unsigned short) 1476098752841899133LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 3] [i_1 + 2] [i_2 - 1]))) : (max((10282327860730885233ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_0 - 2] [i_0 - 2] [i_2 + 1])), (var_0)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned short i_4 = 4; i_4 < 24; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54652)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) : (0U)));
                        var_15 = ((/* implicit */short) arr_0 [i_0]);
                        arr_19 [(unsigned char)1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_14 [i_0] [i_3] [i_0]))) ? (((((/* implicit */int) arr_14 [i_0 + 3] [i_3] [i_5])) / (((/* implicit */int) arr_14 [i_4 - 4] [i_3] [i_0])))) : ((~(((/* implicit */int) (unsigned short)1434))))));
                        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (max(((((_Bool)1) ? (7088077086116124987ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))), (((/* implicit */unsigned long long int) var_4))))));
                        arr_20 [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 2173747799U)) : (3893416243745693170ULL))) << (min((((/* implicit */long long int) ((arr_0 [i_0]) && (((/* implicit */_Bool) (short)12807))))), ((+(1476098752841899120LL)))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) (_Bool)0);
        arr_21 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) 3ULL);
    }
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) (short)-12809)))))));
}
