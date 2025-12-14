/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40551
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (102252984U)))))) ? (((((/* implicit */_Bool) 4192714313U)) ? (11294895327856323102ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7096))))) : (((/* implicit */unsigned long long int) max(((-(4192714280U))), (((/* implicit */unsigned int) (signed char)121)))))));
                arr_7 [i_0] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_17)) - (((((/* implicit */int) (short)7096)) | (((/* implicit */int) (short)14981))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(max((2850646278U), (((/* implicit */unsigned int) (signed char)0)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-4808488185410732509LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))))) - ((-(5841201109143770760ULL)))))));
                        var_21 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (short)7124)))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1))))))), (((long long int) ((((/* implicit */_Bool) var_17)) ? (3LL) : (((/* implicit */long long int) 3636729428U))))))))));
                    }
                    var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(12605542964565780855ULL)))) ? (548805097) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) -548805097))))))), (((((/* implicit */_Bool) (short)7096)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-1))))));
                    var_24 = ((/* implicit */_Bool) (signed char)73);
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_7))));
                    var_26 |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (1817241653U))))));
                }
            } 
        } 
    } 
}
