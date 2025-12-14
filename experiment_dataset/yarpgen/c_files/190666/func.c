/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190666
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -5682194303080837937LL)), (11588896868268192198ULL)));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)17732)) + ((-(((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -5682194303080837920LL)) | (11588896868268192198ULL)))) ? (((/* implicit */unsigned int) -757511905)) : (((((/* implicit */_Bool) 5682194303080837920LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17744))) : (4272810475U)))))) : (((long long int) -5682194303080837937LL))));
    var_16 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) == (min((((/* implicit */unsigned long long int) (short)17)), (17941785796376698419ULL))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)768)) ? (min((((/* implicit */long long int) 3691103006U)), (((-5682194303080837959LL) ^ (((/* implicit */long long int) 757511899)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) > (((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14425))) : (arr_1 [9U] [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0] [i_0]))))))), (max((((/* implicit */long long int) 864130000U)), (-5682194303080837920LL)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3500740865509056868LL)) ? (((/* implicit */unsigned int) -757511905)) : (4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (2400081570U) : (var_6))))))) : (((/* implicit */int) (short)-12223))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 3799805329359563112LL))) ? ((~(arr_0 [i_1]))) : ((~(((/* implicit */int) var_11))))));
                    arr_9 [i_2] = min(((~(4272810465U))), (min((((/* implicit */unsigned int) arr_7 [i_2 - 1] [5U] [i_2 - 2] [i_0])), (var_4))));
                }
            } 
        } 
    }
}
