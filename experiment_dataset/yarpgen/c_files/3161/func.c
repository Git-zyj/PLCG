/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3161
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
    var_20 |= ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min((-164095400), (var_13)))))) ? (((((var_8) >= (((/* implicit */int) var_11)))) ? (((((/* implicit */_Bool) 343321281)) ? (var_8) : (var_1))) : (((247342230) ^ (var_8))))) : (max(((~(var_13))), (((/* implicit */int) ((unsigned short) var_5))))));
    var_21 = var_1;
    var_22 = var_7;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [8])))))));
        var_24 = max(((unsigned short)53265), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15301)) >= (4193792)))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned short)58548)), (426457811))) / (((((/* implicit */_Bool) -2109930268)) ? (1846613830) : (((/* implicit */int) (unsigned short)6985))))))) ? (1623646488) : (max((((/* implicit */int) (unsigned short)9685)), (4194296)))));
                        arr_12 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6987)) ? (((/* implicit */int) (unsigned short)0)) : (343321309)))) ? (1866791915) : (((((/* implicit */_Bool) -400026854)) ? (1623646488) : (-1866791916)))))) ? (550630706) : (((/* implicit */int) (unsigned short)32512))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */int) ((((int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) arr_1 [i_1])))))));
        arr_14 [i_1] [i_1] = (+(348922469));
        arr_15 [i_1] = ((/* implicit */unsigned short) var_5);
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)55850)) || (((/* implicit */_Bool) 1866791915)))))), (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5])) : (1794982494)))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 3) 
        {
            arr_21 [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_10), (1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6 + 1] [i_6 + 3] [i_6 - 1]))))) : (((((/* implicit */_Bool) arr_8 [i_6 + 2] [i_6 - 3] [i_6 + 2])) ? (((/* implicit */int) arr_8 [i_6 - 1] [i_6 - 3] [i_6 - 1])) : (var_10)))));
            arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_10), (arr_18 [i_6])))) ? (var_7) : ((-(((/* implicit */int) var_14)))))), (((/* implicit */int) ((unsigned short) min((var_18), (((/* implicit */int) var_14))))))));
        }
        for (int i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1866791903)) ? (693364247) : (((/* implicit */int) max(((unsigned short)2104), (arr_16 [i_5])))))), (((/* implicit */int) ((((arr_19 [(unsigned short)4]) & (((/* implicit */int) (unsigned short)65535)))) >= (-1623646489))))));
            var_28 += (~(max(((-(((/* implicit */int) var_11)))), (var_9))));
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 7; i_8 += 1) 
    {
        var_29 -= ((/* implicit */unsigned short) -1866791909);
        var_30 ^= var_12;
        var_31 -= ((/* implicit */unsigned short) var_18);
        arr_27 [i_8] = ((arr_23 [i_8 + 1] [(unsigned short)2]) ^ (arr_23 [i_8 - 4] [i_8]));
    }
}
