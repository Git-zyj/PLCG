/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205934
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((short) (short)17395)))));
                    var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -1004180927608573836LL)) ? (3589375701120048375ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)44224)))))))));
                }
            } 
        } 
        arr_10 [i_0 + 2] [i_0] = ((unsigned long long int) max((((unsigned short) var_1)), (((/* implicit */unsigned short) var_1))));
        arr_11 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)177)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) arr_0 [i_0]);
                    arr_17 [i_0] [i_0] [i_3 - 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)44224)) ? (((/* implicit */int) (unsigned short)44220)) : (((/* implicit */int) (unsigned short)44237)))), (((/* implicit */int) (unsigned short)44224))))) || (((/* implicit */_Bool) 14857368372589503240ULL))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)21332)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)44220)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))));
    var_16 = ((signed char) (~(14857368372589503232ULL)));
    var_17 = ((/* implicit */_Bool) var_8);
}
