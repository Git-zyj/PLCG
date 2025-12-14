/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214619
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (min((((((/* implicit */_Bool) 5870836780607629253LL)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_16))), (((/* implicit */unsigned long long int) (short)-23131)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38096)) ? (var_16) : (((/* implicit */unsigned long long int) var_0))))) ? (651725798) : (((/* implicit */int) (unsigned short)38096)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] = (unsigned short)38095;
                        var_18 = ((/* implicit */short) var_14);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_19 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (signed char)34)), (arr_2 [i_0] [i_0])));
                            arr_13 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_4])) ? (((/* implicit */int) (short)15809)) : (2147483647)))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27446))))), (((/* implicit */long long int) var_15))));
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 3116292023U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_1])))))) : (3439265718U)));
                            arr_17 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((3362139055U) * (arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) (unsigned short)27446)) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_3] [i_5])))))))), (min((((((/* implicit */_Bool) 9138241336304160993LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))) : (9529362383306099967ULL))), (((/* implicit */unsigned long long int) 770200631))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) -770200631))));
                            arr_18 [i_0] [i_3] [i_2] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9068)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32763))))) : (min((((((/* implicit */_Bool) 3002339761U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38095))) : (arr_8 [i_0] [i_1] [i_2] [i_5]))), (((/* implicit */unsigned long long int) (unsigned short)38096))))));
                        }
                        for (int i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0])) | (((/* implicit */int) arr_14 [i_3] [i_0])))))));
                            var_23 = ((/* implicit */unsigned short) 51194878);
                        }
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned short) var_0);
    }
    var_24 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((9416868794704060023ULL), (((/* implicit */unsigned long long int) var_10)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)59))))), (min((var_14), (((/* implicit */unsigned long long int) (unsigned short)38096)))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                arr_26 [i_8] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */long long int) 332994952U)), (var_11)))) ? (min((((/* implicit */unsigned int) -770200631)), (arr_22 [i_8]))) : (arr_24 [i_8]))), (9U)));
                var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) arr_25 [i_8]))))) ? (((((/* implicit */_Bool) var_1)) ? (4294967295U) : (var_13))) : (min((((/* implicit */unsigned int) arr_23 [i_8])), (var_0)))))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)59)) ? (491520U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59)))))), ((((_Bool)1) ? (12138218267727873735ULL) : (((/* implicit */unsigned long long int) -1))))))));
            }
        } 
    } 
}
