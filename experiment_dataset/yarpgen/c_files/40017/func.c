/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40017
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned char)81);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 4234236566U)) ? ((-(((/* implicit */int) arr_8 [i_3])))) : ((-(((/* implicit */int) var_8))))))));
                    var_13 = ((/* implicit */unsigned char) (~(4902078925966798454ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_14 = (unsigned short)7349;
                                var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_5 [i_1 - 1] [i_5 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [10ULL] [10ULL] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))), ((-(((/* implicit */int) (!((_Bool)1))))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)251))))) ? (((((/* implicit */int) arr_5 [i_1] [(unsigned char)17])) << (((arr_11 [i_1] [(unsigned short)15] [(unsigned char)5]) - (684403205U))))) : ((~(((/* implicit */int) (unsigned char)20))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1785765102U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 511333650U))))) : (((/* implicit */int) var_6))))) : (((unsigned long long int) arr_14 [9U] [i_1 - 1] [9U])))))));
        var_17 = ((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)6] [i_1 - 1]);
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)60733)) <= (((/* implicit */int) (unsigned short)7373)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
    var_19 = ((/* implicit */_Bool) ((unsigned short) var_7));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 13109323505443355505ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) min((var_10), ((~(511333672U))))))));
}
