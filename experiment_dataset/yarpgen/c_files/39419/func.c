/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39419
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
    var_10 -= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((((/* implicit */_Bool) (-(var_7)))) ? ((~(((/* implicit */int) (unsigned short)1910)))) : ((-(((/* implicit */int) (unsigned char)230))))))));
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 |= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63608))) & ((+(4384387812554517907ULL))))) / (((/* implicit */unsigned long long int) arr_0 [0ULL] [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) & (arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) (unsigned char)230)));
            var_14 = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
        }
        arr_4 [i_0] = ((/* implicit */unsigned short) (short)-6299);
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_2 [i_4] [i_0]), (arr_2 [i_0] [i_2]))))));
                        arr_15 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_3]))));
                        arr_16 [i_0] [i_4] [i_0] [i_2] [i_0] = ((/* implicit */long long int) (~((~(arr_0 [i_0] [i_2])))));
                        arr_17 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_2 [i_0] [i_4])) : ((~(((/* implicit */int) (unsigned char)217))))));
                    }
                } 
            } 
        } 
    }
}
