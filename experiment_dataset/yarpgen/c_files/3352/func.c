/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3352
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)96), ((unsigned char)127)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((arr_0 [15LL]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)45639)) * (((/* implicit */int) (signed char)69)))))));
        var_14 = ((unsigned short) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_1] [i_3] = ((/* implicit */unsigned short) (~(3234580214562534490LL)));
                        arr_12 [i_1] [i_1 + 1] [i_1] [i_2] [i_3] = ((/* implicit */short) (-((+(((/* implicit */int) arr_5 [i_1] [(unsigned char)18] [i_3]))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) | (((/* implicit */int) ((_Bool) (unsigned short)32280))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 10; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : ((-(var_10))))), (((/* implicit */long long int) (-(2147483647))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)59761)) ? (((/* implicit */int) (unsigned short)19210)) : (((/* implicit */int) (unsigned short)33252))));
        arr_16 [i_4] [10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) != (-9167620237343748095LL)));
    }
    var_18 = ((/* implicit */unsigned short) (((((((~(((/* implicit */int) var_1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))) + (2147483647))) >> (((((((/* implicit */int) ((short) (short)15))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)41)) : (((/* implicit */int) (signed char)44)))))) - (606)))));
    /* LoopNest 3 */
    for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 2; i_7 < 18; i_7 += 4) 
            {
                {
                    arr_24 [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned char) min((arr_21 [i_5]), ((unsigned short)39455))));
                    arr_25 [i_5] [i_6] [i_7 - 2] [i_7 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_0))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) % (arr_17 [i_7 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23378))))))));
                }
            } 
        } 
    } 
}
