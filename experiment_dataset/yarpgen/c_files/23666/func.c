/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23666
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) (unsigned short)37178)))), (((((/* implicit */_Bool) max(((unsigned char)156), (((/* implicit */unsigned char) (signed char)127))))) && (((/* implicit */_Bool) 4154909436U)))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)0))) ? ((~(var_5))) : (arr_1 [i_0])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0]))))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((((/* implicit */int) var_11)) >= (((/* implicit */int) var_3)))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [(signed char)8] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_2);
                        var_23 += ((/* implicit */unsigned short) 4086387369445752684LL);
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (140057851U)))) : ((-(var_2)))));
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned long long int) var_17);
        var_24 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (-6706443033054473657LL)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (arr_17 [i_4] [i_4])));
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_15)), (var_11))))))), (var_13)));
        var_26 *= ((/* implicit */signed char) var_19);
    }
    var_27 &= ((/* implicit */unsigned long long int) ((((_Bool) max((((/* implicit */unsigned long long int) var_16)), (var_2)))) ? (((/* implicit */int) var_3)) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))) - ((-(((/* implicit */int) var_16))))))));
    var_28 = ((/* implicit */unsigned short) var_13);
}
