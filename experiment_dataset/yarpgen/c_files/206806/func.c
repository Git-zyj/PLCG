/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206806
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((unsigned long long int) (unsigned char)255))));
        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) != (7192942355660669580ULL)))) < (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_15)))))));
        var_18 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((unsigned char) (short)16807)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((-5924331438849933450LL), (((/* implicit */long long int) (+(((/* implicit */int) (short)-20752)))))));
    }
    for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_19 ^= ((/* implicit */_Bool) 9670048057496996335ULL);
                        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_0))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))) >> (((max((((/* implicit */long long int) arr_4 [i_3 - 1])), (arr_12 [i_1] [i_1] [i_1 + 2] [i_3] [i_3 + 1]))) + (116LL)))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(arr_11 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) var_5)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-90)))))) & (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))) <= (var_6)))))));
        var_22 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_4))))))));
    }
    var_24 = ((int) var_11);
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) (short)30752)) >= (((/* implicit */int) ((((/* implicit */int) ((unsigned short) 827179360692671484LL))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)15308))))))))))));
}
