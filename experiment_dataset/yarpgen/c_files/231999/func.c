/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231999
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((var_18) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (1195137303U))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)6135)) : (((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) ((short) (signed char)127)))))), ((~(max((3099829993U), (((/* implicit */unsigned int) 2097151))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)19))) : ((+(8419475237649150735LL))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))))));
    }
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (unsigned char)9))));
    var_21 = ((/* implicit */unsigned long long int) 1135124184U);
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                var_22 |= ((/* implicit */int) (~(((unsigned int) (-(arr_8 [i_1] [i_1]))))));
                arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_2 [i_2]), (arr_2 [i_2]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15739)) + (((/* implicit */int) var_13))))) ? (arr_11 [i_3]) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)126))))))))));
        arr_13 [(unsigned short)15] [(unsigned short)15] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 2260823292U)) ? (arr_11 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */int) (signed char)117);
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    arr_22 [i_4] = (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))) : (arr_11 [15]))));
                    arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (signed char)-118);
                    var_24 = ((/* implicit */signed char) ((int) 4294967272U));
                    arr_24 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-22350)) & (261817141)));
                }
            } 
        } 
    }
}
