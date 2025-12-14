/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237280
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_10 -= ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) arr_4 [(signed char)5] [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? ((~(((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) (unsigned short)39244)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)121))))));
                arr_6 [(signed char)21] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)34815))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-40)) ? (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)18] [i_0])) ? (((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (signed char)-40)))) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)56)))))) : (((((((/* implicit */_Bool) (unsigned short)63599)) ? (((/* implicit */int) (unsigned short)32640)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) ^ (((/* implicit */int) ((signed char) (signed char)94)))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [(signed char)4] = arr_5 [i_1];
                        arr_14 [i_0] [i_0] [i_1] [i_2] [(unsigned short)16] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22553)) ? (((/* implicit */int) ((signed char) (unsigned short)65533))) : ((+(((/* implicit */int) arr_10 [(signed char)22] [i_1] [(signed char)17] [i_3]))))))) ? (((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (unsigned short)26296)))) : ((~(((/* implicit */int) arr_5 [i_0]))))));
                        arr_15 [i_0] [(signed char)16] [(signed char)14] [(signed char)16] = ((/* implicit */signed char) (unsigned short)65527);
                    }
                    var_11 = ((unsigned short) ((signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(signed char)6] [i_2])) || (((/* implicit */_Bool) (signed char)9)))));
                }
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1])))))))))))));
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((signed char) (signed char)-46)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (unsigned short)27467)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)32)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-100))))))) : (((((/* implicit */_Bool) (unsigned short)5976)) ? (((((/* implicit */_Bool) arr_16 [(signed char)22] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [(unsigned short)19] [i_1] [i_0])) : (((/* implicit */int) (signed char)100)))) : (((((/* implicit */int) arr_0 [i_0] [(signed char)8])) | (((/* implicit */int) arr_2 [i_0] [i_1] [i_4])))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)118))) ? (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (unsigned short)65129)))) : (((/* implicit */int) arr_12 [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4095)))))))) : (((((/* implicit */int) (unsigned short)25241)) - (((/* implicit */int) (unsigned short)57344))))));
                        arr_20 [i_5] [i_5] [(signed char)18] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_0 [i_0] [i_1]))))))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_4])) : (((((/* implicit */_Bool) (signed char)28)) ? (((((/* implicit */_Bool) arr_5 [(signed char)17])) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) arr_11 [(signed char)13] [i_1] [i_4] [i_5])))) : (((((/* implicit */_Bool) arr_1 [i_4] [(unsigned short)14])) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (signed char)-3))))))));
                    }
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)91)) >= (((/* implicit */int) (signed char)88)))))))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [(signed char)19])) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_4])) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned short)26683)))) : (((((/* implicit */_Bool) arr_10 [(signed char)2] [(signed char)9] [(unsigned short)12] [i_0])) ? (((/* implicit */int) arr_11 [i_4] [i_1] [i_1] [i_0])) : (((/* implicit */int) (signed char)20)))))) : (((/* implicit */int) arr_1 [i_1] [i_4]))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            {
                arr_27 [(signed char)5] [i_6] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)63)) ? (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_9 [(signed char)18] [(unsigned short)18] [(signed char)18] [i_7])))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_7] [i_7])) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (unsigned short)20061)))))) + (((/* implicit */int) (unsigned short)65535))));
                var_16 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_17 [i_6] [i_7] [i_7]))))) ? (((((/* implicit */int) arr_26 [i_7])) | (((/* implicit */int) arr_4 [i_6] [i_6])))) : (((((/* implicit */int) (unsigned short)14445)) & (((/* implicit */int) arr_8 [i_6] [i_6] [i_7] [i_7]))))))));
                var_17 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57099)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)64702)))))));
            }
        } 
    } 
}
