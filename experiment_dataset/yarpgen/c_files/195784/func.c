/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195784
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
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)27)) << (((4025289749U) - (4025289744U)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_15 &= ((/* implicit */unsigned char) arr_0 [i_3] [i_3 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)51616)) != (((/* implicit */int) ((15682378720543436396ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 140682238U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32082))))))))));
                            var_17 = ((/* implicit */unsigned char) (-(((int) ((((/* implicit */_Bool) (short)-32081)) ? (8812700373195626759LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))))));
                        }
                        arr_15 [0U] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned int) 952657209)) : (269677543U)));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) var_13);
}
