/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211382
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62185))) == (arr_1 [i_1]))) ? (((/* implicit */long long int) arr_3 [i_1])) : (((((/* implicit */_Bool) (unsigned short)59690)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59708)))))))) ? (((arr_0 [i_0] [i_1 - 1]) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) (unsigned short)59708)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                var_12 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) | (((/* implicit */int) (unsigned short)59690))))) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)59676)) : (var_8))))), (((/* implicit */int) (unsigned short)5845))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_13 [i_2] = ((/* implicit */signed char) ((max((arr_0 [i_2] [i_4]), (arr_0 [i_2] [i_3 + 1]))) ? ((-(((/* implicit */int) arr_0 [i_2] [i_2])))) : (((int) arr_0 [i_2] [i_3 + 3]))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned int) var_5)))));
                }
            } 
        } 
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) (unsigned short)59708));
        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_11 [i_2] [i_2])), (((unsigned int) (-(((/* implicit */int) (unsigned char)102)))))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max(((unsigned short)5834), (((/* implicit */unsigned short) (signed char)88)))))));
        var_17 &= ((/* implicit */unsigned short) (unsigned char)232);
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_18 = ((/* implicit */int) max((var_18), ((+((+(((/* implicit */int) (signed char)-79))))))));
        var_19 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_4 [i_5] [i_5])))), ((-(947432310)))));
        var_20 = ((/* implicit */signed char) ((_Bool) ((signed char) arr_2 [i_5] [i_5])));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5773340044111176605ULL)) ? (106111182) : (arr_6 [i_6])))) ? (((/* implicit */int) ((_Bool) arr_11 [14U] [14U]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)48687)) : (((/* implicit */int) (signed char)-91))))));
        arr_19 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (((/* implicit */int) (short)-17230)) : (((/* implicit */int) arr_4 [i_6] [i_6]))))) == ((+(17479160810223589227ULL)))));
    }
}
