/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238435
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = var_6;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_14 = ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)89)));
                        arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((((int) (unsigned char)8)) | (((((((/* implicit */int) (unsigned char)127)) >> (((((/* implicit */int) var_8)) - (58))))) - (((/* implicit */int) ((-1) >= (((/* implicit */int) (unsigned char)10))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [(unsigned char)15] = ((/* implicit */unsigned char) -435495474);
    }
    for (int i_4 = 4; i_4 < 16; i_4 += 2) 
    {
        var_15 = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)16)) != (0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 1063925058))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        arr_26 [i_5] [i_7] [i_6] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)247))) ? (((/* implicit */int) ((var_12) <= (((5) | (13)))))) : (((/* implicit */int) ((0) > (((((/* implicit */int) var_1)) * (511))))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) -435495474)) ? (((/* implicit */int) var_6)) : (0))) > (((((/* implicit */_Bool) (unsigned char)45)) ? (-1) : (var_9))))))));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */int) (!(((-6) > (-1023701675)))));
    }
    var_18 += min((var_0), (((((/* implicit */int) ((unsigned char) (unsigned char)154))) & (((int) (unsigned char)0)))));
    var_19 = ((/* implicit */int) var_2);
}
