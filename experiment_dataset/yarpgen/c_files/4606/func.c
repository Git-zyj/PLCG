/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4606
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 1815208715)) > (var_4)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_1))))));
                    var_15 = ((/* implicit */unsigned long long int) var_5);
                    var_16 = ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((var_1) % (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [(signed char)5] [i_1])))))))) ? (arr_7 [i_0] [i_0] [i_0] [14ULL]) : (((/* implicit */int) ((short) (~(var_11))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_5)) ^ (var_11))) >> (((((/* implicit */int) var_0)) - (36734)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 10732536702562730335ULL))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (7714207371146821281ULL)))) >> (((1045483108U) - (1045483077U)))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) > (((/* implicit */int) var_0))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) % (211217938270489024ULL))) - (70783444177001787ULL)))));
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3])) : (549755748352ULL)))) ? (var_1) : (max((min((var_8), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned char) 7714207371146821297ULL);
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                                arr_25 [i_4] [14U] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            }
                        } 
                    } 
                    arr_26 [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */signed char) var_10);
                    arr_27 [i_4] [5U] [i_5] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (_Bool)1)))), (var_6)));
                }
            } 
        } 
        var_22 *= ((/* implicit */unsigned int) ((((((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) var_2))))) << (((var_7) - (872718141U))))) % (((/* implicit */int) var_10))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (3288756922873338393ULL))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_2)) % (var_4)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (var_8)))) ^ (((/* implicit */int) var_12)))))));
}
