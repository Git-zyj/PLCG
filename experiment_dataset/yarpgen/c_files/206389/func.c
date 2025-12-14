/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206389
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (signed char)-16))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1322164105)) ? (141168787) : (690602151)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 4; i_3 < 9; i_3 += 1) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_8 [i_3]))));
        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (9431977387564369621ULL) : ((~(9014766686145181994ULL))))) <= (((unsigned long long int) (-(1838066434U))))));
        arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 4])) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [i_3 - 4]))))) && (((/* implicit */_Bool) (signed char)95))));
    }
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-355461841)));
        var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551613ULL))));
        arr_17 [i_4] &= ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4])) == (((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        var_20 = (-(-959352428));
        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_5 - 2]))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-101)) : (((((/* implicit */_Bool) 124)) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) (unsigned char)189))))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((_Bool) 212362925));
}
