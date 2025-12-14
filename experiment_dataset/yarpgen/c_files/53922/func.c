/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53922
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)12249)) <= (((/* implicit */int) (unsigned short)12247))))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)53288)) : (((/* implicit */int) (unsigned short)57907)))))))));
                    var_21 = var_6;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            {
                var_22 ^= ((unsigned short) arr_12 [(unsigned short)0] [(unsigned short)17] [(unsigned short)3]);
                arr_14 [i_3] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) (unsigned short)0)))));
            }
        } 
    } 
    var_23 = (unsigned short)7628;
    var_24 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)12254)))) == (((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 3 */
    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
    {
        var_25 = (unsigned short)62143;
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)12249)) == (((/* implicit */int) (unsigned short)12249)))))));
    }
    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
    {
        arr_19 [(unsigned short)0] [i_6] = arr_2 [i_6];
        var_27 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (unsigned short)7588)), (((((/* implicit */_Bool) arr_11 [(unsigned short)21])) ? (((/* implicit */int) arr_6 [i_6 + 1] [i_6 + 1] [i_6] [(unsigned short)18])) : (((/* implicit */int) (unsigned short)22493)))))) / (((/* implicit */int) (unsigned short)60458))));
        arr_20 [(unsigned short)0] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)39159))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (unsigned short i_8 = 4; i_8 < 15; i_8 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned short)0)))));
                    arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)43968)) <= (((/* implicit */int) ((unsigned short) max((arr_22 [i_6] [i_7] [i_6]), ((unsigned short)7771)))))));
                    var_29 ^= (unsigned short)22493;
                    arr_26 [i_6] [(unsigned short)8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51486)) ? (((/* implicit */int) (unsigned short)21334)) : (((/* implicit */int) (unsigned short)65381))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_17)) : ((~(((/* implicit */int) (unsigned short)12260))))));
    }
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((var_18), (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)55660)) : (((/* implicit */int) var_18))))))))))));
        var_32 = ((unsigned short) (unsigned short)57498);
        arr_29 [i_9] |= ((unsigned short) var_16);
        var_33 = (unsigned short)7640;
    }
}
