/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53330
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
    var_14 = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) ((short) var_9))))));
    var_15 = ((/* implicit */long long int) (-((+(var_0)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) -2718764017801093185LL);
                    var_17 = ((((((/* implicit */_Bool) min((1548514105), (arr_2 [i_0])))) ? (((int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((int) arr_8 [i_0] [i_0])))) - ((+(((/* implicit */int) min(((short)18794), ((short)-5588)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((int) arr_10 [i_3])), (((/* implicit */int) ((2047U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))))))))) ? (min((((/* implicit */unsigned int) (unsigned char)218)), (((arr_11 [i_3] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-5597))))))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (arr_4 [i_3] [i_3]) : (-1343936646)))) : ((-(arr_9 [i_3])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_16 [i_3] = ((/* implicit */long long int) 1794520414);
                    var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) (+(-1343936645)))) ? (((((/* implicit */_Bool) arr_1 [6LL] [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 + 4] [i_4] [i_3]))) : (arr_14 [i_3] [i_4] [i_5]))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), (((long long int) arr_15 [i_5] [i_5 - 1] [i_5 + 3]))));
                    var_20 = ((/* implicit */int) min((((long long int) ((arr_11 [i_3] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-7692)))))), (((/* implicit */long long int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(1343936649)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-637730195) > (((/* implicit */int) (unsigned short)45715)))))) : (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_7]) : (((/* implicit */long long int) arr_8 [i_7] [i_6 - 1])))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(arr_3 [i_7] [i_6]))))))));
                                var_22 = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)5589)) : (1841148696))), (((-1343936645) ^ (1803466361)))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2232907792479981031ULL)) ? (((unsigned int) ((long long int) arr_9 [i_6 - 2]))) : (((((/* implicit */unsigned int) -1944354749)) % (arr_19 [i_6 + 1] [i_6 - 1] [i_5 - 1] [i_4] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_3] = ((/* implicit */short) ((int) (-(((var_6) - (((/* implicit */unsigned long long int) var_5)))))));
        var_24 = ((/* implicit */short) (((~(arr_6 [(_Bool)1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18729)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_8 = 2; i_8 < 15; i_8 += 2) 
        {
            arr_28 [i_3] = ((/* implicit */short) ((_Bool) (unsigned char)131));
            var_25 = ((/* implicit */_Bool) (+(((unsigned int) 819112164U))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_32 [i_9] [i_3] = ((((/* implicit */_Bool) 3475855117U)) ? (arr_31 [i_9] [i_3]) : (arr_11 [i_9] [i_3]));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_9])) ? (((/* implicit */long long int) arr_9 [i_3])) : (-9223372036854775785LL)));
        }
    }
}
