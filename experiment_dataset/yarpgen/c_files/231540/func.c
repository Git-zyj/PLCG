/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231540
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
    var_10 = ((/* implicit */long long int) (((-((-(((/* implicit */int) var_7)))))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) 15780308918483149647ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (15780308918483149630ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) / (max((((unsigned long long int) 15780308918483149666ULL)), (((/* implicit */unsigned long long int) (unsigned char)104))))));
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (8008088424132935391ULL)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-69)) - (((/* implicit */int) (unsigned char)105)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (signed char)-69);
                    arr_9 [i_0] [i_0] [(unsigned char)7] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) min((((/* implicit */short) (signed char)-67)), (var_2)))))) * (((/* implicit */int) ((_Bool) (unsigned char)165)))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
        var_16 |= ((/* implicit */short) -6LL);
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) | (min((((/* implicit */unsigned long long int) (+(var_0)))), (var_1)))));
}
