/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196814
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
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) 655529338);
                    arr_6 [i_0] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) - (((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned char)154))))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 4; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) min(((signed char)-3), ((signed char)-3))))))))));
        arr_11 [i_3] [(signed char)5] = ((/* implicit */signed char) var_1);
        /* LoopSeq 2 */
        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38482)))) + (((/* implicit */int) max(((_Bool)1), (var_13))))))) ? (((/* implicit */int) (!((!((_Bool)1)))))) : (((/* implicit */int) var_10))));
            arr_15 [i_3 - 4] [i_4 + 1] = ((/* implicit */_Bool) var_8);
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_4)))))));
            var_22 = ((((/* implicit */int) ((signed char) (signed char)-114))) == ((((_Bool)1) ? (((/* implicit */int) (short)16380)) : (((/* implicit */int) (signed char)-3)))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_21 [i_3 - 3] [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)64)), ((unsigned char)90)))) << (((/* implicit */int) (!(var_6)))))));
                        var_23 = ((/* implicit */int) var_4);
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((((+(((/* implicit */int) var_13)))) == (((/* implicit */int) (_Bool)1)))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) (signed char)-117)))))));
                            arr_35 [i_3 - 3] [i_3] [i_8] [i_9] [i_10] [i_3 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)38509))));
                        }
                    } 
                } 
            } 
            var_25 |= ((/* implicit */unsigned char) (_Bool)1);
        }
    }
    var_26 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))) ? ((((!(((/* implicit */_Bool) (unsigned char)251)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)135))))) : (((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) var_9))));
    var_27 |= ((/* implicit */int) var_10);
}
