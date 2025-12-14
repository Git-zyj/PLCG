/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242695
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0 - 2] [13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (5887843755494460425ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                arr_5 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [(signed char)13] [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned short)65531))))) ? (((/* implicit */int) (signed char)-76)) : ((-(((/* implicit */int) (unsigned char)224))))))), (max((((/* implicit */unsigned long long int) (unsigned char)31)), (((((/* implicit */_Bool) (unsigned short)34862)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34848)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_13 [(unsigned char)0] = ((/* implicit */signed char) var_11);
                arr_14 [12] |= ((/* implicit */long long int) max(((unsigned short)30661), (((/* implicit */unsigned short) (_Bool)1))));
                arr_15 [6U] |= ((/* implicit */_Bool) max((4719830136755454263ULL), (((/* implicit */unsigned long long int) (short)1371))));
                arr_16 [i_2] [11U] = ((/* implicit */signed char) (unsigned short)22781);
            }
        } 
    } 
}
