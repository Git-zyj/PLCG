/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4102
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 + 3]))))) : (((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_0])) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1999527766))))))))));
                var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(var_4)))), (((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_4 [i_0]))))) - (var_12)))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    var_17 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))) & (arr_3 [i_0] [i_0])));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((3996055635U) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned int) max((-700625434), (((/* implicit */int) (short)24108)))))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_9))))))))));
                    var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) (signed char)127)), (1928597111U)))))));
                }
                for (int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    arr_12 [(unsigned short)9] [i_1] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) : (var_12)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_14 [i_3] [i_1] [i_0] [i_1] [i_0 - 1] [i_0])) != (min((8194993798186766459ULL), (((/* implicit */unsigned long long int) -26983738))))))))));
                                var_22 += ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2650628532319306617LL)) ? (((/* implicit */int) arr_15 [i_0] [4ULL] [i_3] [i_0] [i_5])) : (((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned char)0] [i_4] [i_5])))))))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) 5742219728260881804LL);
    /* LoopNest 2 */
    for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
    {
        for (short i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            {
                arr_27 [i_6] [(_Bool)1] [i_6] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_12))))));
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_6 - 2])) ? (arr_31 [i_6 + 1]) : (arr_31 [i_6 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)32753))))) : ((+(arr_31 [i_6 - 1])))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) -1268441559)) - (min((((/* implicit */long long int) (unsigned short)43189)), (var_8))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((8194993798186766470ULL), (((/* implicit */unsigned long long int) 1999527783))))))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) max(((~(var_2))), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)119))))))));
            }
        } 
    } 
    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12))), (((((/* implicit */_Bool) (signed char)13)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((long long int) var_9)) : (((/* implicit */long long int) min((((((/* implicit */_Bool) 82721270)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) min((((/* implicit */short) var_10)), (var_5)))))))));
    var_29 = ((/* implicit */short) var_2);
}
