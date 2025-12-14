/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210344
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
    var_12 += ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_11))))) ? (((((/* implicit */_Bool) var_2)) ? (var_10) : (var_9))) : (var_9));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) ((unsigned char) (-9223372036854775807LL - 1LL))));
                var_13 = ((/* implicit */unsigned int) max((((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (short)29555)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12322)) ? (((/* implicit */int) (short)-12322)) : (((/* implicit */int) (short)-17522)))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((-8606131183912387785LL) + (9223372036854775807LL))) >> (((max((-8513307243328079755LL), (((/* implicit */long long int) 29360128)))) - (29360070LL))))) ^ (((/* implicit */long long int) 3433740752U))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)17513))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */long long int) ((((((((/* implicit */_Bool) 8693301654398347659ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)0)))) + (2147483647))) << (((((((/* implicit */int) var_2)) << (((4723095954039452135LL) - (4723095954039452132LL))))) - (680))))))));
        var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (((((/* implicit */_Bool) arr_9 [i_5] [i_5 - 1] [i_5 + 2])) ? (var_4) : (((/* implicit */long long int) var_5))))))), (291571125209772729ULL)));
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 10; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        arr_28 [i_5] [i_5] [i_8] [i_8] = ((/* implicit */long long int) min((((/* implicit */int) arr_17 [i_5 + 1] [i_6 + 1])), (var_0)));
                        var_17 &= ((/* implicit */short) ((((/* implicit */long long int) var_0)) > (min((((/* implicit */long long int) 29360131)), (9223372036854775807LL)))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 5180129977098886918LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))) : (((((/* implicit */_Bool) 1215968105U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58260))) : (var_10))))))));
}
