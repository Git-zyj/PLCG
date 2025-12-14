/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28261
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_0])));
        var_12 -= ((/* implicit */_Bool) (-(max((1ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_2 [i_0] [i_0]))))))));
        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)8313))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (arr_2 [i_1] [i_1]))), (max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) arr_0 [i_1]))))), (min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned long long int) 1119608921)))))));
        var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((8144958536286530127ULL), (((/* implicit */unsigned long long int) (unsigned short)57473))))) || (((/* implicit */_Bool) min((var_7), (-1119608943))))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)5307)), ((unsigned short)28225))))) : ((-(arr_2 [i_1] [i_1])))))));
        var_15 = ((/* implicit */int) arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? ((-(((/* implicit */int) ((((/* implicit */int) (short)-30788)) <= (((/* implicit */int) (signed char)-96))))))) : (((/* implicit */int) (short)5302))));
        arr_10 [i_2] = ((/* implicit */signed char) arr_1 [i_2]);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            var_17 -= ((/* implicit */int) (_Bool)1);
            arr_13 [i_3] = ((/* implicit */unsigned long long int) (unsigned char)244);
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 1119608969))));
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_19 -= ((/* implicit */short) (+((((_Bool)1) ? (26112206) : (-774249560)))));
            var_20 -= ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)5335)), (-4039353449623378841LL)))) ? (((/* implicit */int) arr_9 [i_2])) : (max(((+(((/* implicit */int) arr_11 [i_2] [i_2] [i_4])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_4])), (arr_11 [i_2] [i_4] [i_4])))))));
        }
        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
        {
            var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-27264))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (14322167425516452284ULL) : (((/* implicit */unsigned long long int) 1193672544))))) ? (arr_15 [i_2] [i_5 + 1] [i_5 - 2]) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : ((-(((((/* implicit */_Bool) arr_15 [i_2] [i_5] [i_5])) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) var_4))))))));
            var_22 -= (~(((/* implicit */int) max((max(((unsigned short)2915), (((/* implicit */unsigned short) arr_9 [i_2])))), (((/* implicit */unsigned short) (short)-9))))));
        }
    }
    for (int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) max((1193672570), (774249565)));
        var_24 *= arr_1 [i_6];
        var_25 -= ((/* implicit */unsigned short) ((8ULL) << (((arr_1 [i_6]) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_1 [i_6]))))));
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)2915)) : (((/* implicit */int) var_1)))), (((/* implicit */int) min(((unsigned short)15596), (((/* implicit */unsigned short) (short)-9))))))) : (((((/* implicit */_Bool) -1453373966)) ? (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (unsigned short)15615)) : (((/* implicit */int) (unsigned short)62601)))) : (((/* implicit */int) var_1))))));
    var_27 = ((/* implicit */short) (-(max((var_6), (((/* implicit */unsigned long long int) var_2))))));
    var_28 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) var_4)))))) <= (max((var_5), (((/* implicit */unsigned long long int) (short)-5307)))))), (((((/* implicit */_Bool) (+(var_3)))) && (((/* implicit */_Bool) var_0))))));
}
