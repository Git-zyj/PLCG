/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242791
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 405737979)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_6 [(_Bool)1] [5U] [i_2 - 1]))))) ? (((/* implicit */int) (!(var_15)))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_0 - 1]))))))));
                    var_18 = ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))) ? ((~(((unsigned int) (signed char)-1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3832772925U)) ? (((/* implicit */int) (_Bool)1)) : (-390917131))), (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (signed char)3)) : (-1242698646)))))) : (2166013066U)));
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_20 [(short)16] [i_0] [i_4] [i_5] [i_0] = ((/* implicit */signed char) (short)64);
                        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4887)) ? (((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */unsigned int) var_3))))) : (((/* implicit */int) (_Bool)1))))), (arr_2 [1U])));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */int) var_16)) : (max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-5))))))));
    }
    for (signed char i_6 = 4; i_6 < 8; i_6 += 2) 
    {
        arr_25 [i_6] = ((/* implicit */_Bool) (signed char)39);
        arr_26 [i_6] [i_6] = ((/* implicit */signed char) min(((((_Bool)1) ? (arr_22 [i_6 - 1] [i_6 + 4]) : (((/* implicit */int) (signed char)33)))), (max((1242698620), (((/* implicit */int) arr_10 [i_6 + 2]))))));
    }
    var_21 -= ((/* implicit */signed char) -1242698640);
}
