/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193938
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
    var_11 = ((/* implicit */int) (short)-19656);
    var_12 = ((/* implicit */unsigned long long int) -9LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((9LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))))) == (((((/* implicit */_Bool) 16LL)) ? (((/* implicit */int) (signed char)32)) : (33554431)))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) var_0);
                }
                for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) 4520496220545121298LL);
                    var_15 = ((/* implicit */unsigned short) -33554416);
                }
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -33554432);
                arr_14 [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -33554431))))));
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38350)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) : (16474491666699041772ULL)))) ? ((+(((/* implicit */int) (unsigned char)222)))) : (((2019387973) << (((((/* implicit */int) var_0)) - (87))))))) * (((/* implicit */int) (signed char)-25))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_1);
}
