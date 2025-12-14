/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236573
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1908525791)) ? (((/* implicit */int) (unsigned short)65535)) : (-1367721216)))) || (((/* implicit */_Bool) arr_0 [i_0]))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) var_6);
                arr_8 [i_0] = ((((((/* implicit */_Bool) -1367721244)) ? (1367721206) : (-1367721216))) + (((/* implicit */int) ((((/* implicit */_Bool) -1367721216)) && (((/* implicit */_Bool) -965775657))))));
                var_12 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_20 [i_2] [i_3] [i_3] [i_4] [(signed char)15] [i_5] = ((/* implicit */unsigned char) arr_11 [i_3] [i_3]);
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 965775656)) ? (-1367721216) : (-965775671)));
                        arr_21 [i_5] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_3] [i_2] [i_3 + 2])) ? (arr_13 [i_3] [i_3] [i_4]) : (((/* implicit */int) var_3)))) & (965775657)));
                        arr_22 [i_2] [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */int) ((_Bool) arr_13 [i_3] [i_4] [i_3]));
                    }
                } 
            } 
        } 
        arr_23 [(signed char)10] &= ((((/* implicit */unsigned long long int) -1367721223)) * (1439099065195382765ULL));
        var_14 = ((/* implicit */int) var_10);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 965775686))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) var_7)))))))) : (((((/* implicit */_Bool) 17007645008514168851ULL)) ? (1439099065195382765ULL) : (((/* implicit */unsigned long long int) -965775657))))));
                        arr_33 [i_9] [i_7] [i_9] [i_8] [i_7] [i_9] = var_3;
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) 17007645008514168877ULL)))))));
                        var_17 = ((/* implicit */signed char) (~(16869050167311319745ULL)));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) (+(965775646)));
    }
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (1577693906398231860ULL)));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1367721215)) ? (((/* implicit */long long int) var_8)) : (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_4))))) : (max((var_9), (((/* implicit */long long int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)));
}
