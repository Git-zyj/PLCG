/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192704
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_9))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+((+(((((/* implicit */int) var_6)) % (((/* implicit */int) var_11))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_1)))))));
        var_14 += (-((~(var_5))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        var_15 = ((((/* implicit */unsigned long long int) (((~(var_5))) | (var_10)))) != ((+(var_4))));
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+((+(var_5)))))) - ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_4)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1)))))))));
        arr_12 [i_3] [i_3] = ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))) > ((((-(((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) var_1)))));
        var_18 = ((/* implicit */short) (+((-(var_10)))));
    }
}
