/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209120
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
    var_11 = ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((var_6) == (((-257553622) / (((/* implicit */int) (signed char)-88)))))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_7)))))))) + (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) - (((/* implicit */int) ((((/* implicit */_Bool) 257553622)) && (((/* implicit */_Bool) var_9)))))))));
    var_13 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (7054))))) + ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2])))))))));
        arr_3 [i_0] = ((((((/* implicit */int) (short)-10617)) - (((((/* implicit */int) (_Bool)1)) / (-939565641))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) -257553622)) || ((_Bool)0)))));
    }
    for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_9)))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-78)) - (((/* implicit */int) (short)26324))))) > (15520757868811015147ULL))))));
        arr_6 [i_1] |= (~(((((/* implicit */int) (_Bool)0)) ^ (-2031245448))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_16 = ((((((((/* implicit */int) (_Bool)0)) >> (0ULL))) ^ (((/* implicit */int) ((((/* implicit */int) var_8)) == (arr_5 [i_1] [i_1 - 3])))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) 4601344602973267591ULL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                        var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) && (((/* implicit */_Bool) (signed char)-122))))) - (((/* implicit */int) var_10))))));
                        arr_13 [i_4] [i_3] [i_2] [i_1 - 3] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))));
                        arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 9787374886058027395ULL)) && (((/* implicit */_Bool) (unsigned short)48763))));
                    }
                } 
            } 
        } 
    }
}
