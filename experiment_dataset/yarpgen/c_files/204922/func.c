/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204922
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) min((446480559U), (((/* implicit */unsigned int) (unsigned char)0))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */int) (unsigned char)17);
                        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((arr_5 [0LL] [(unsigned char)6] [i_3]), (((/* implicit */long long int) (unsigned char)14))))))) ? ((~(((/* implicit */int) min(((unsigned char)244), (((/* implicit */unsigned char) var_13))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)16] [(unsigned short)2]))) : (arr_5 [i_0] [i_1 - 1] [i_2])))))));
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) arr_4 [i_0 + 1] [8] [i_0 + 1])))) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) (short)20027))));
                        var_22 = ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) (unsigned char)245))))), (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (4294967295U))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_0 + 1] [i_2 + 3] [i_3 - 2]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((unsigned char) arr_6 [i_0]));
                        var_24 |= ((/* implicit */_Bool) arr_4 [i_4] [13U] [i_1]);
                    }
                    for (signed char i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)6)), (((short) (signed char)-120)))))) <= ((~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_9 [(unsigned char)1] [i_0] [i_1 - 1] [i_0] [i_2] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                        var_26 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) 1822898382))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_5 + 2]))))) : (((((/* implicit */int) arr_1 [9U])) + (((/* implicit */int) (unsigned char)33)))))) > ((+(((((/* implicit */_Bool) arr_2 [i_0 + 1] [(short)12] [i_0])) ? (((/* implicit */int) arr_11 [(short)17] [i_1 + 1] [16] [i_5 - 3])) : (((/* implicit */int) (unsigned char)239))))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(-2020389059)))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 1367211755U)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned char)107))))))));
                        var_28 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned char)4] [i_2 + 1] [i_5])) + (((/* implicit */int) arr_10 [(unsigned short)3] [i_0] [i_1] [i_0] [i_0])))) <= (((/* implicit */int) ((short) arr_0 [i_0] [(_Bool)1])))))), (max((((/* implicit */long long int) (unsigned char)149)), (((((/* implicit */long long int) ((/* implicit */int) var_6))) + (arr_8 [(_Bool)1] [i_0 + 1] [i_0] [i_5])))))));
                    }
                    var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_2 + 1])) - (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_2 + 1])))) - (((/* implicit */int) min((arr_4 [i_0] [i_0 + 1] [i_2 + 1]), (((/* implicit */unsigned short) (unsigned char)22)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned char) ((arr_5 [(_Bool)1] [i_7] [i_7]) > (((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [6U])))) >> (((((/* implicit */_Bool) arr_1 [(unsigned short)7])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)0)))))))));
                arr_17 [i_6] = ((/* implicit */short) ((((((/* implicit */int) var_14)) + ((+(((/* implicit */int) (unsigned char)255)))))) + (((((/* implicit */int) arr_7 [i_7] [i_7])) + (((/* implicit */int) arr_0 [i_6] [i_6]))))));
            }
        } 
    } 
}
